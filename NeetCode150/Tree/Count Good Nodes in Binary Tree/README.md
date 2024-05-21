# [Count Good Nodes in Binary Tree](https://neetcode.io/problems/count-good-nodes-in-binary-tree)

## UMPIRE
### Understand
- 使用深度優先搜索（DFS）來遍歷樹。
- 在遍歷的過程中，追蹤從根節點到當前節點的路徑上遇到的最大值。
- 如果當前節點的值大於或等於這條路徑上的最大值，則該節點為「好節點」。
- 更新路徑上的最大值，然後繼續遍歷左右子樹。
### Match
* Tree
* DFS
### Plan
- 實現一個遞歸的輔助函數 `dfs`，該函數接受當前節點和當前路徑上的最大值作為參數。
- 如果當前節點為空，返回0。
- 如果當前節點的值大於或等於最大值，則將結果計數器加1。
- 更新當前路徑上的最大值。
- 遞歸地計算左右子樹的好節點數量，並累加到結果計數器中。
- 返回結果計數器。
### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，`n`為總結點數
* Space Complexity O(n)，`n`代表二元樹最深的深度，因為使用遞迴需要用到`stack`記住