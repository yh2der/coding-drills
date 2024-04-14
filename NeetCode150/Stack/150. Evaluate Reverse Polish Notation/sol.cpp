#include <iostream>
#include <vector>
#include <stack>
#include <string>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> nums;
    int n = tokens.size();

    for (int i = 0; i < n; i++) {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
            int num2 = nums.top();
            nums.pop();
            int num1 = nums.top();
            nums.pop();
            
            if (tokens[i] == "+")
                nums.push(num1 + num2);
            else if (tokens[i] == "-")
                nums.push(num1 - num2);
            else if (tokens[i] == "*")
                nums.push(num1 * num2);
            else if (tokens[i] == "/")
                nums.push(num1 / num2);
        } else {
            nums.push(stoi(tokens[i]));
        }
    }

    return nums.top();
}
};