# [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)

## UMPIRE
### Understand
兩個list要合併成一個並且排序
### Match
* Linked List
### Plan
* 宣告一個節點和一個指標變數
* 利用一個while遍歷兩個串列直到其中一個為空，過程中比較節點`val`值來決定先新增哪一個到結果

### Implement
see sol.cpp
### Review 

### Evaluate
* Time Complexity : O(n)，n是較長的鏈表節點數量

* Space Complexity : O(1)，只有使用變數，沒有使用其餘空間