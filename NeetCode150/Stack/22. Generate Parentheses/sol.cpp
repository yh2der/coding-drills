class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        generateParenthesisHelper(result, current, 0, 0, n);
        return result;
    }

private:
    void generateParenthesisHelper(vector<string>& result, string& current, int openCount, int closeCount, int n) {
        // Base case: If both open and close counts reach n, add the current combination to the result
        if (openCount == n && closeCount == n) {
            result.push_back(current);
            return;
        }

        // Add open parenthesis if open count is less than n
        if (openCount < n) {
            current.push_back('(');
            generateParenthesisHelper(result, current, openCount + 1, closeCount, n);
            current.pop_back(); // Backtrack
        }

        // Add close parenthesis if close count is less than open count
        if (closeCount < openCount) {
            current.push_back(')');
            generateParenthesisHelper(result, current, openCount, closeCount + 1, n);
            current.pop_back(); // Backtrack
        }
    }
};
