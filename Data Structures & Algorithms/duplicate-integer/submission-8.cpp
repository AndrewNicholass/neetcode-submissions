class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> hash;

        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        for(auto num : hash){
            if(num.second > 1){
                return true;
            }
        }

        return false;

    }
};