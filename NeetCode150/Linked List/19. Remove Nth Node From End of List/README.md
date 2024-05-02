# [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)
## 直覺 
反轉list後取出`n<sup>th<sup>`再反轉回傳，但這樣沒效率
## UMPIRE
### Understand
刪除從尾巴數過來第`n`個節點
### Match
* Linked list
### Plan
* 先讓快指針走`n+1`步，慢指針就會跟快指針相差`n`步
* 如此一來當快指針到達最後時，慢指針的位置就會是要刪除的位置
### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)
* Sapce Complexity O(1)