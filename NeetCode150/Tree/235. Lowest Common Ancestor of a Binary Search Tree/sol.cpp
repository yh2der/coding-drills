/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr)
            return nullptr;
        
        // 如果 p 和 q 都小于根节点的值，则最低公共祖先在左子树中
        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        
        // 如果 p 和 q 都大于根节点的值，则最低公共祖先在右子树中
        if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        
        // 如果一个值小于根节点的值，另一个值大于根节点的值，则根节点即为最低公共祖先
        return root;
    }
};
