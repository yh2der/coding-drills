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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // 讓快指針先移動 n+1 步
        for (int i = 0; i < n + 1; i++) {
            fast = fast->next;
        }

        // 當快指針到達結尾時，慢指針會指向要刪除的節點的前一個節點
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // 刪除節點
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        return dummy->next;
    }
};