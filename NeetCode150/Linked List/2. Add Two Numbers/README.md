# [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)

## UMPIRE
### Understand 
將兩個鏈結串列相加，節點順序是從個位數開始表示
### Match 
* Linked List
### Plan
* 宣告新結點存答案
* 進入一個迴圈，當鏈結串列還有東西或是有進位時，進入迴圈
    - 計算兩節點相加的值
    - 計算進位
    - 並利用結果宣告成節點

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，`n`為較長`list`的長度
* Space Complexity O(n)