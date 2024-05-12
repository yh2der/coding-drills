# [572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/)
## UMPIRE
### Understand
判斷一個二叉樹 `subRoot` 是否為另一個二叉樹 `root` 的子樹
### Match
Tree
### Plan
1. 定義一個私有函數 `isSame`，用於比較兩個二叉樹是否相同。
   - 如果兩個根節點都為 `NULL`，則返回 `true`。
   - 如果其中一個根節點為 `NULL`，另一個不為 `NULL`，則返回 `false`。
   - 如果兩個根節點的值不相同，則返回 `false`。
   - 否則，遞歸比較左子樹和右子樹是否相同。

2. 在 `isSubtree` 函數中:
   - 如果 `subRoot` 為 `NULL`，則返回 `true`，因為空樹可視為任何二叉樹的子樹。
   - 如果 `root` 為 `NULL`，但 `subRoot` 不為 `NULL`，則返回 `false`。
   - 如果 `root` 和 `subRoot` 相同（調用 `isSame` 函數檢查），則返回 `true`。
   - 否則，遞歸檢查 `subRoot` 是否為 `root` 的左子樹或右子樹的子樹。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(m * n)，其中 m 和 n 分別是兩個二叉樹的節點數量。
* Space Complexity O(max(m, n))，在最壞情況下，需要遍歷整個大樹和小樹