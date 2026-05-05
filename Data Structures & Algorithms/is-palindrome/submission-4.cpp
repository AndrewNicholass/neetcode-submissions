class Solution {
public:
    bool isPalindrome(string s) {
      int j = 0;
      int k = s.size()-1;
      
      while(j < k){
        cout << j << ' ' << s[j] << endl;
        cout << k << ' ' << s[k] << endl;
        if(!isalnum(s[j]) || s[j] == ' '){
            j++;
            continue;
        }

        if(!isalnum(s[k]) || s[k] == ' '){
            k--;
            continue;
        }

        if(tolower(s[j]) != tolower(s[k])){
            return false;
        }

        j++;
        k--;
      }

      return true;
    }
};
