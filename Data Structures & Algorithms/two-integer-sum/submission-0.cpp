class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }


        for(int i = 0; i < nums.size(); i++){
            int distance = target - nums[i];
            if(hash.count(distance) && hash[distance] != i){
                return {i, hash[distance]};
            }
        }

        return {};
    }
};
