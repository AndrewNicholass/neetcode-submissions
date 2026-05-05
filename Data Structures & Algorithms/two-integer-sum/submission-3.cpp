class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        int difference = 0;


        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            difference = target - nums[i];
            if(hash.count(difference) && hash[difference] != i){
                return {i, hash[difference]};
            }
        }

        return {};
    }
};
