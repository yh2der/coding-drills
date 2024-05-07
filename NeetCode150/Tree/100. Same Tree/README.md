# [100. Same Tree](https://leetcode.com/problems/same-tree/description/)
## UMPIRE 
### Understand
判斷兩個二元樹是否相同
### Match
Tree
### Plan
1. **定義二叉樹節點結構**
    - 使用 `TreeNode` 結構，它包含一個整數值 `val` 和兩個指向左右子樹的指針。
    - 提供三個構造函數，分別為默認構造函數和帶有值參數的構造函數。

2. **實現 `isSameTree` 函數**
    - 如果 `p` 和 `q` 都是空指針，表示兩棵樹都為空，返回 true。
    - 如果其中一個是空指針而另一個不是，表示兩棵樹不相同，返回 false。
    - 如果兩個指針都不是空指針，比較它們的值是否相等，以及它們的左右子樹是否分別相同。
    - 將 `p` 和 `q` 的值比較和左右子樹的相等性遞歸地進行比較。

3. **返回結果**
    - 返回最終的比較結果，表示兩個二叉樹是否相同。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，`n`為節點總數
* Space Complexity O(n)，`n`為節點總數