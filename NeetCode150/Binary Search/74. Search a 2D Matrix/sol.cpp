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
