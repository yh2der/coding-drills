//1
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> charMap;
        
        // Check row
        for (int i = 0; i < board.size(); i++) {
            charMap.clear();
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.' && charMap.find(board[i][j]) != charMap.end()) {
                    return false;
                }
                charMap.insert(board[i][j]);
            }
        }
        
        // Check column
        for (int i = 0; i < board[0].size(); i++) {
            charMap.clear();
            for (int j = 0; j < board.size(); j++) {
                if (board[j][i] != '.' && charMap.find(board[j][i]) != charMap.end()) {
                    return false;
                }
                charMap.insert(board[j][i]);
            }  
        }
        
        // Check 3x3 subgrids
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                charMap.clear();
                for (int row = i; row < i + 3; row++) {
                    for (int col = j; col < j + 3; col++) {
                        if (board[row][col] != '.' && charMap.find(board[row][col]) != charMap.end()) {
                            return false;
                        }
                        charMap.insert(board[row][col]);
                    }
                }
            }
        }
        
        return true;
    }
};
//2
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char current_val = board[i][j];
                if (current_val != '.') {
                    string row_val = "Row_" + to_string(i) + "_" + current_val;
                    string col_val = "Col_" + to_string(j) + "_" + current_val;
                    string subgrid_val = "Subgrid_" + to_string(i / 3) + "_" + to_string(j / 3) + "_" + current_val;
                    if (seen.count(row_val) || seen.count(col_val) || seen.count(subgrid_val))
                        return false;
                    seen.insert(row_val);
                    seen.insert(col_val);
                    seen.insert(subgrid_val);
                }
            }
        }
        return true;
    }
};
