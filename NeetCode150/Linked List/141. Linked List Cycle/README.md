# 141. Linked List Cycle
## UMPIRE
### Understand
To see if there is a cycle in Linked List
### Match
* Linked List
### Plan
* use two pointers, `slow = head`and`fast = head->next`.
* The pointer `slow` goes a step per time and `fast` goes two steps.
* if they meet return `true`, otherwise return `false`
### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(n)
* Space Complexity O(1)