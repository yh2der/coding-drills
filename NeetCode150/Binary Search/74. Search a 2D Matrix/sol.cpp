// search one time
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int start = 0, end = rows * cols - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int mid_val = matrix[mid / cols][mid % cols];
            
            if (mid_val == target) {
                return true;
            } else if (mid_val < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return false;
    }
};

// search 2 times
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int top = 0, bot = ROWS - 1;
        while (top <= bot) {
            int row = (top + bot) / 2;
            if (target > matrix[row][COLS - 1]) {
                top = row + 1;
            } else if (target < matrix[row][0]) {
                bot = row - 1;
            } else {
                break;
            }
        }

        if (!(top <= bot)) {
            return false;
        }
        int row = (top + bot) / 2;
        int l = 0, r = COLS - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (target > matrix[row][m]) {
                l = m + 1;
            } else if (target < matrix[row][m]) {
                r = m - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
