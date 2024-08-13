#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> squares;  // key = (r / 3) * 3 + c / 3

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char cell = board[r][c];
                if (cell == '.') {
                    continue;
                }
                if (rows[r].count(cell) || cols[c].count(cell) || squares[(r / 3) * 3 + c / 3].count(cell)) {
                    return false;
                }
                cols[c].insert(cell);
                rows[r].insert(cell);
                squares[(r / 3) * 3 + c / 3].insert(cell);
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Test case 1: Valid Sudoku
    vector<vector<char>> board1 = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    // Test case 2: Invalid Sudoku (repeated '5' in the first row)
    vector<vector<char>> board2 = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'5', '.', '.', '.', '8', '.', '.', '7', '9'} // Invalid due to '5' in the last row
    };

    cout << "Test Case 1: " << (solution.isValidSudoku(board1) ? "Valid" : "Invalid") << endl;
    cout << "Test Case 2: " << (solution.isValidSudoku(board2) ? "Valid" : "Invalid") << endl;

    return 0;
}
