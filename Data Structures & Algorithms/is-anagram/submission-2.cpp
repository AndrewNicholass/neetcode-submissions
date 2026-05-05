class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> hash;
        unordered_map<int, int> hash2;

        if(s.size() != t.size()){
            return false;
        }

        for(int i = 0; i < s.size(); i++){
            hash[s[i]]++;
            hash2[t[i]]++;
        }

        for(int nums : s){
            if(hash[nums] != hash2[nums]){
                return false;
            }
        }

        for(int nums : t){
            if(hash[nums] != hash2[nums]){
                return false;
            }
        }

        return true;
    }
};
