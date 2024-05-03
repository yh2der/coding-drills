# [138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/description/)
## UMPIRE
### Understand
複製一份list，且是deep copy，也就是說不能只複製引用
### Match
* Linked list
* Hash Table
### Plan
1. 建立新節點的哈希表映射
    - 遍歷原始鏈表，對於每個節點，創建一個對應的新節點，並將其存儲在哈希表中。將原始節點作為鍵，新節點作為值。

2. 設置新節點的 `next` 和 `random` 指針
    - 再次遍歷原始鏈表，對於每個節點：
        - 將新節點的 `next` 指針設置為原始節點的 `next` 對應的新節點。
        - 將新節點的 `random`指針設置為原始節點的 `random` 對應的新節點。

3. 返回複製後的鏈表的頭節點
    - 返回哈希表中存儲的原始鏈表的頭節點對應的新節點，這將是複製後的鏈表的頭節點。
### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)，n是`list`長度
* Space Complexity O(n)，we use a hashmap to store n key value pairs