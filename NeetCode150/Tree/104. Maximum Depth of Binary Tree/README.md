# [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)

## UMPIRE
### Understand
計算一棵二元樹的最長深度
### Match 
Tree
### Plan
1. **Define Function**: Define a function named `maxDepth`, which takes a pointer to the root node of the binary tree as input and returns an integer representing the maximum depth of the binary tree.

2. **Base Case Check**: Check if the root node is NULL. If the root node is NULL, it indicates that the tree is empty, so return a depth of 0.

3. **Recursively Process Left and Right Subtrees**: If the root node is not NULL, recursively call the `maxDepth` function for the left and right subtrees to calculate their maximum depths.

4. **Compute Depth**: Take the maximum of the maximum depths of the left and right subtrees, and add 1 to account for the current level, which represents the depth of the entire tree.

5. **Return Depth**: Finally, return the calculated depth.
### Implement
see sol.cpp
### Review 

### Evaluate
* Time Complexity O(n)
* Space Complexity O(1)