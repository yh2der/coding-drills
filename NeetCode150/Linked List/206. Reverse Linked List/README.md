# [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/)

## UMPIRE
### Understand
反轉一個單向Linked List

### Match
* Linked List

### Plan
* 需要三個指標變數`prev`、`curr`、`forward`，分別代表前一個節點、當前節點以及下一個節點
* 進入一個while循環，只要`curr`不為`NULL`，我們就會一直進行反轉。
    * 將`forward`設置為`curr->next`。這樣我們就記錄了下一個節點的位置，以便在修改`curr->next`之後仍然能夠訪問它。
    * 將`curr->next`指向`prev`。這樣做的效果是，我們將`curr->next`指向了它的前一個節點，進行反轉。
    * 將`prev`設置為`curr`。這樣做是為了更新`prev`，使其指向當前節點，因為當前節點現在已經成為下一個節點的前一個節點。
    * 將`curr`設置為`forward`。這樣做是為了更新`curr`，使其指向原始鏈表中的下一個節點，以便進行下一次迭代。

### Implement
see sol.cpp

### Review

### Evaulate
* Time Complexity : O(n)，n是鏈表的節點數量

* Space Complexity : O(1)，只有使用變數，沒有使用其餘空間