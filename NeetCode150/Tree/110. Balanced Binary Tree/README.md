# [110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/description/)
## UMPIRE
### Understand
平衡樹就是左右子樹深度差不超過1
### Match
Tree
### Plan
1. **定義二叉樹節點結構**
    - 使用 `TreeNode` 結構，它包含一個整數值 `val` 和兩個指向左右子樹的指針。
    - 提供三個構造函數，分別為默認構造函數和帶有值參數的構造函數。
2. **定義解決方案類**
    - 使用 `Solution` 類，它包含一個公共成員變量 `ans` 用於檢查二叉樹是否平衡。
    - 定義 `checkBalance` 函數，用於計算以當前節點為根的子樹的高度，並檢查是否平衡。
    - 定義 `isBalanced` 函數，它是對 `checkBalance` 函數的包裹，用於檢查整棵二叉樹是否平衡。
3. **在 `checkBalance` 函數中進行遞歸計算**
    - 如果當前節點為空，返回深度 0。
    - 如果 `ans` 已經是 false，表示已經發現了不平衡的情況，直接返回深度 0。
    - 遞歸計算左子樹的高度 `leftSubTree` 和右子樹的高度 `rightSubTree`。
    - 如果左右子樹高度差的絕對值大於 1，將 `ans` 設置為 false。
    - 返回當前節點的高度，即 `1 + max(leftSubTree, rightSubTree)`。
4. **在 `isBalanced` 函數中檢查二叉樹是否平衡**
    - 初始化 `ans` 為 true。
    - 調用 `checkBalance` 函數計算二叉樹的高度並檢查是否平衡。
    - 返回 `ans`，表示整棵二叉樹是否平衡。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，`n`為節點數
* Space Complexity O(h)，因為使用遞迴會用到`stack`，`h`是二元樹的高度