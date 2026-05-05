class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        
        for(string nums : strs){
            string sorted = nums;
            sort(sorted.begin(), sorted.end());
            hash[sorted].push_back(nums);
        }

        vector<vector<string>> ans;

        for(auto& pair : hash){
            ans.push_back(pair.second);
        }



        return ans;
    }
};
