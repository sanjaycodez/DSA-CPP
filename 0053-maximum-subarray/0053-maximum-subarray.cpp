class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = 0;
        for(auto x : nums){
            currSum = max(currSum, 0);
            currSum += x;
            maxSum = max(currSum, maxSum);
        }
        return maxSum;

    }
};