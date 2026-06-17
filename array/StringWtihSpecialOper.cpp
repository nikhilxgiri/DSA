class Solution {
public:
    string processStr(string s) {
        std:: string result = "";
        for( int i = 0; i < s.length();i++)
        {
            if( isalnum(s[i])){
                result.push_back(s[i]);
            }
            else if(s[i] == '*'){
                if (!result.empty()) {
                    result.pop_back();
                }
            }
            else if(s[i] == '#'){
                if (!result.empty()) {
                    result += result;
                    }
            }
            else if(s[i] == '%'){
                reverse(result.begin(), result.end());
            }
        }
        return result;
    }
};