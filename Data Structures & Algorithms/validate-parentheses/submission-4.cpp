class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };

        if(s.size() == 1){
            return false;
        }

        for(char c: s){
            if(map.count(c)){
                if(!stack.empty() && stack.top() == map[c]){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
