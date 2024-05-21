# [Kth Smallest Integer in BST](https://neetcode.io/problems/kth-smallest-integer-in-bst)
## UMPIRE
### Understand
找出二元樹第`k`小的值
### Match
* Tree
* DFS
* In-order Traversal
### Plan
1. **初始化**：
   - 創建一個空堆疊 `stack`。
   - 設置當前節點 `curr` 為根節點 `root`。

2. **進入主循環**：
   - 當堆疊不為空或當前節點不為空時，進行如下操作：

3. **沿著左子樹向下走**：
   - 當當前節點 `curr` 不為空時：
     - 將當前節點壓入堆疊。
     - 將當前節點設置為其左子節點。

4. **處理堆疊頂端節點**：
   - 當當前節點為空時，說明已經到達最左端。
   - 從堆疊中彈出頂端節點，將其設置為當前節點 `curr`。
   - 將 `k` 減1。
   - 如果 `k` 為0，說明當前節點就是第 `k` 小的元素，返回該節點的值。

5. **遍歷右子樹**：
   - 將當前節點設置為其右子節點。
   - 繼續進行主循環，處理右子節點及其子樹。

6. **特別情況**：
   - 如果遍歷完整棵樹後，沒有找到第 `k` 小的元素（理論上不應該發生，因為題目保證 `k` 是有效的），返回-1。
### Implement
see sol.cpp
### Review

### Evaluate
* TC O(n)， `n` 是樹中節點的數量
* SC O(h)，`h`為堆疊的最大深度為樹的高度