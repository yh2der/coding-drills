class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (int i = 0; i < s.size(); i++) {
            // 如果是左括號，則直接壓入堆疊
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                myStack.push(s[i]);
            } else {
                // 如果是右括號，則檢查堆疊是否為空
                if (myStack.empty()) {
                    return false; // 右括號多於左括號，不合法
                }
                // 檢查括號對應關係
                if ((s[i] == ')' && myStack.top() != '(') ||
                    (s[i] == '}' && myStack.top() != '{') ||
                    (s[i] == ']' && myStack.top() != '[')) {
                    return false;
                }
                // 對應關係正確，則彈出左括號
                myStack.pop();
            }
        }
        // 確保堆疊中的左括號都有對應的右括號
        return myStack.empty();
    }
};
