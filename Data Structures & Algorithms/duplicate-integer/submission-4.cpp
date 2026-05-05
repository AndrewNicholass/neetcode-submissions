class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            // cout << nums[i] <<endl;
            hash[nums[i]]++;
            // cout << hash[nums[i]] << endl;
            if(hash[nums[i]] > 1){
                return true;
            }
        }

        return false;
    }
};