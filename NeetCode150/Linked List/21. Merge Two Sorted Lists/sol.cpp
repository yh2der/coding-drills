/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // 定義一個虛擬頭節點，方便後續操作
        ListNode* dummy = new ListNode(-1);
        // 定義一個指針指向虛擬頭節點，用來遍歷合併後的鏈表
        ListNode* current = dummy;
        
        // 遍歷兩個鏈表，直到其中一個為空為止
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        
        // 將剩餘的節點接到合併後的鏈表尾部
        if (l1 != nullptr) {
            current->next = l1;
        } else {
            current->next = l2;
        }
        
        // 返回合併後的鏈表的起始節點
        return dummy->next;
    }
};
