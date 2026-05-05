class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = 0;
        int k = numbers.size()-1;

        while(j < k){
            if(numbers[j] + numbers[k] == target){
                return {j+1, k+1};
            }else if(numbers[j] + numbers[k] < target){
                j++;
            }else{
                k--;
            }
        }

        return {};
    }
};
