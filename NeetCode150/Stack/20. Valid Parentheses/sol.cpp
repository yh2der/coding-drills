class Solution {
public:
    bool isValid(string s) {
        stack<char> input;
        if (s == "")    return true;

        for (int i=0; i<s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                input.push(s[i]);
            } 
            else {
                if (input.empty())  return false;
                char temp = input.top();
                if (s[i] == ')') {
                    if (temp != '(')    return false;
                } 
                else if (s[i] == '}') {
                    if (temp != '{')    return false;
                } 
                else {
                    if (temp != '[')    return false;
                }
                input.pop();
            }
        }
        return input.empty();
    }
};
