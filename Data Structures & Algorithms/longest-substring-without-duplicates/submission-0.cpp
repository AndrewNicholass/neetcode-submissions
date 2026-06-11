class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int result = 0;
        unordered_map<char, int> mp;

        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) != mp.end()){
                left = max(left, mp[s[i]] + 1);
            }
            mp[s[i]] = i;
            result = max(result, i - left + 1);
        }

        return result;
    }
};
