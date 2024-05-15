# [199. Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/description/)

## UMPIRE
### Understand
找出二元樹右側的節點，也就是找出每一層`level`的右邊節點
### Match
Tree
### Plan
1. 創建一個結果向量 result，用於保存右側視圖的節點值。
2. 如果根節點為空，則直接返回空的結果向量。
3. 使用一個隊列 queue 來進行層序遍歷。將根節點入隊。
4. 進入循環，直到隊列為空：
   1. 獲取當前隊列的大小 size。
   2. 進入內部循環，從 0 到 size-1 遍歷：
      - 取出隊列的頭節點 node。
      - 如果 i 等於 size-1，即當前節點為該層的最右節點，將其值加入結果向量 result 中。
      - 如果當前節點有左子節點，將左子節點入隊。
      - 如果當前節點有右子節點，將右子節點入隊。
5. 返回結果向量 result。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，`n`是二元樹中節點的數量
* Space Complexity O(n)，`n`是二元樹的最大寬度