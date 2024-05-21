# [Valid Binary Search Tree](https://neetcode.io/problems/valid-binary-search-tree)
## UMPIRE
### Understand
給定一個二元樹，判斷該二元樹是否是一個有效的二元搜尋樹（BST）。BST的特性是對於每個節點，左子樹的所有節點值都小於該節點的值，而右子樹的所有節點值都大於該節點的值。
- 使用遞歸方法來驗證每個節點是否滿足BST的條件。
- 在遞歸過程中，保持當前節點值應該在的一個範圍內，對每個節點進行檢查。
- 初始範圍設置為負無窮大到正無窮大（`LONG_MIN` 到 `LONG_MAX`）。
### Match
Tree
### Plan
- 實現一個遞歸的輔助函數 `valid`，該函數接受當前節點、範圍的左邊界和右邊界作為參數。
- 如果當前節點為空，返回 `true`。
- 如果當前節點的值不在 `(left, right)` 範圍內，返回 `false`。
- 遞歸地檢查左子樹，更新右邊界為當前節點的值。
- 遞歸地檢查右子樹，更新左邊界為當前節點的值。
- 如果左右子樹都滿足BST的規則，返回 `true`。
### Implement
see sol.cpp
### Review

### Evaluate
* TC O(n)，`n`是樹中節點的數量
* SC O(h)，`h` 是樹的高度
    - 在最壞的情況下，對於一棵線性的樹（即只有左子樹或只有右子樹的樹），空間複雜度為 O(n)，其中 n 是樹中節點的數量。
    - 在最好的情況下，對於一棵平衡的樹，遞歸深度為 O(log n)，其中 n 是樹中節點的數量