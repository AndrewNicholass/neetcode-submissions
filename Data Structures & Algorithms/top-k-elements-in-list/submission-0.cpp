class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;

        for(int num : nums){
            hash[num]++;
        }

        vector<pair<int, int>> sorted;

        for(auto& nums : hash){
            sorted.push_back({nums.second, nums.first});
        }

        sort(sorted.rbegin(), sorted.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(sorted[i].second);
        }

        return ans;
    }
};
