/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) {
            return nullptr;
        }

        //根節點為preorder第一個元素
        TreeNode* root = new TreeNode(preorder[0]);
        // 找出根結點在inorder的位置 就可以確定左子樹和右子樹的範圍(根節點左邊一定是左子樹)
        // .begin() and .end()都是指到位址 所以利用最後扣掉初始位址來計算出找到的值是在第幾個index
        auto mid = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();

        vector<int> leftPre(preorder.begin() + 1, preorder.begin() + mid + 1);
        vector<int> rightPre(preorder.begin() + mid + 1, preorder.end());
        vector<int> leftIn(inorder.begin(), inorder.begin() + mid);
        vector<int> rightIn(inorder.begin() + mid + 1, inorder.end());
        root->left = buildTree(leftPre, leftIn);
        root->right = buildTree(rightPre, rightIn);
        return root;
    }
};
