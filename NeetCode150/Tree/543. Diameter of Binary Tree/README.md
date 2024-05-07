# [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/description/)

## UMPIRE 
### Understand 
計算最長直徑，可以不經過跟節點
### Match
Tree
### Plan
1. **定義二叉樹節點結構**
    - 使用 `TreeNode` 結構，它包含一個整數值 `val` 和兩個指向左右子樹的指針。
    - 提供三個構造函數，分別為默認構造函數和帶有值參數的構造函數。
2. **定義解決方案類**
    - 使用 `Solution` 類，它包含一個公共成員變量 `mx` 用於存儲最大直徑值。
    - 定義 `solve` 函數，用於計算以當前節點為根的子樹的深度，並更新最大直徑值。
    - 定義 `diameterOfBinaryTree` 函數，它是對 `solve` 函數的包裹，用於計算二叉樹的直徑。
3. **在 `solve` 函數中進行遞歸計算**
    - 如果當前節點為空，返回深度 0。
    - 遞歸計算左子樹的深度 `l` 和右子樹的深度 `r`。
    - 更新最大直徑值 `mx` 為 `l + r` 和目前 `mx` 的最大值。
    - 返回當前節點的深度，即 `1 + max(l, r)`。
4. **在 `diameterOfBinaryTree` 函數中計算二叉樹的直徑**
    - 調用 `solve` 函數計算直徑。
    - 返回最大直徑值 `mx`。
### Implement
see sol.cpp
### Review
### Evaluate
* Time Complexity O()
* Space Complexity O()