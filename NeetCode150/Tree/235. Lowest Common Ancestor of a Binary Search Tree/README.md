# [235. Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/)

## UMPIRE
### Understand
找到最低共同祖先節點
### Match
Tree
### Plan
1. **檢查根節點是否為空**：
   - 如果根節點為空，則返回空指標。

2. **比較 p 和 q 的值與根節點的值**：
   - 如果 p 和 q 都小於根節點的值，則最低公共祖先在左子樹中。
   - 如果 p 和 q 都大於根節點的值，則最低公共祖先在右子樹中。
   - 如果一個值小於根節點的值，另一個值大於根節點的值，則根節點即為最低公共祖先。

3. **遞歸搜索**：
   - 根據上述比較結果，遞歸調用 `lowestCommonAncestor` 方法，傳入相應的子樹和節點 p、q。

4. **返回結果**：
   - 返回找到的最低公共祖先節點。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O()
* Space Complexity O()