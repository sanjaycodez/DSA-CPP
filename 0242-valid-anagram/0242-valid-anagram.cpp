class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int> mp;
        // if(s.length() != t.length()) return false;
        // for(auto c : s){
        //     mp[c]++;
        // }
        // for(auto c : t){
        //     mp[c]--;
        //     if(mp[c] < 0) return false;
        // }
        // return true;

        if(s.length() != t.length()) return false;
        vector<int> count(26, 0);

        for(int i = 0 ; i < s.size(); ++i){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(auto c : count){
            if(c != 0) return false;
        }
        return true;
        
    }
};