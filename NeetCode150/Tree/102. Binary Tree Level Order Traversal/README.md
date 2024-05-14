# [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)

## UMPIRE
### Understand
一層一層由左到右遍歷這個二元樹

### Match 
Tree
### Plan


* 步驟 1: 定義節點結構體
    - 定義一個結構體 `TreeNode`，包含一個整數值 `val` 和指向左右子節點的指針 `left` 和 `right`。

* *步驟 2: 實現層序遍歷函數
    - 創建一個函數 `levelOrder`，接受樹根節點指針為參數，返回二維向量 `result`，其中每個子向量代表一層節點的值。

* *步驟 3: 使用佇列實現 BFS
    - 初始化一個空的結果向量 `result` 來存儲每層的節點值。
    - 創建一個佇列 `q`，將樹根節點放入佇列中。
    - 遍歷佇列 `q` 直到它變空：
    - 在每一輪迭代中，從佇列中彈出一個節點，將其值添加到當前層的向量中。
    - 如果節點有左子節點，將左子節點入佇列。
    - 如果節點有右子節點，將右子節點入佇列。
    - 將每層的向量添加到 `result` 中。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，`n`是總結點數
* Space Complexity O(n)，因為使用一個二維vector存取結果向量的大小取決於二叉樹的高度