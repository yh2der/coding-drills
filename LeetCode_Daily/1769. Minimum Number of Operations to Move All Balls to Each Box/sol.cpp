// basic
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans;
        int cur = 0;

        for (int i=0; i<n; i++) {
            cur = 0;
            for (int j=0; j<n; j++) {
                if (i != j && boxes[j] == '1') {
                    cur += abs(j - i);
                }
            }
            ans.push_back(cur);
        }
        return ans;
    }
};

// better
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);
        
        // 從左往右遍歷
        int count = 0;  // 記錄左邊有幾個球
        int operations = 0;  // 記錄移動次數
        for (int i = 0; i < n; i++) {
            ans[i] += operations;  // 加上從左邊移動來的成本
            count += boxes[i] - '0';  // 更新左邊球的數量
            operations += count;  // 更新移動成本
        }
        
        // 從右往左遍歷
        count = 0;
        operations = 0;
        for (int i = n-1; i >= 0; i--) {
            ans[i] += operations;  // 加上從右邊移動來的成本
            count += boxes[i] - '0';  // 更新右邊球的數量
            operations += count;  // 更新移動成本
        }
        
        return ans;
    }
};