class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> stack;
        TreeNode* curr = root;

        while (!stack.empty() || curr != nullptr) {
            // 沿著左子樹向下走，將所有左子節點壓入堆疊
            while (curr != nullptr) {
                stack.push(curr);
                curr = curr->left;
            }
            // 彈出堆疊頂端節點
            curr = stack.top();
            stack.pop();
            // 減少計數器
            k--;
            // 如果計數器為0，返回當前節點的值
            if (k == 0) {
                return curr->val;
            }
            // 設置當前節點為其右子節點
            curr = curr->right;
        }

        return -1; // 當樹中節點數量不足k時，不應該發生
    }
};
