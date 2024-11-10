# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        
        # 使用快慢指針
        fast = slow = dummy
        
        # 先讓 fast 前進 n 步
        for _ in range(n):
            fast = fast.next
            
        # 一起移動直到 fast 到達尾端
        while fast.next:
            fast = fast.next
            slow = slow.next
        
        # 刪除節點
        slow.next = slow.next.next
        
        return dummy.next