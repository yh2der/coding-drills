# 155. Min Stack

## UMPIRE

### Understand
- We need to implement a stack that supports push, pop, top, and retrieving the minimum element
- All operations should be in O(1) time complexity
- The stack should support the following operations:
  1. push(val) - Push element val onto the stack
  2. pop() - Remove the element on top of the stack
  3. top() - Get the top element of the stack
  4. getMin() - Retrieve the minimum element in the stack
- Can the stack be empty? Yes, and operations on an empty stack should be handled
- Are there any constraints on the values? -2^31 <= val <= 2^31 - 1

### Match
- Stack
- Auxiliary stack for tracking minimums

### Plan
1. Use two stacks:
   - One regular stack for storing all elements
   - One auxiliary stack for tracking minimum elements
2. For push operation:
   - Push the value to the regular stack
   - Compare the value with the top of the min stack (or the value itself if min stack is empty)
   - Push the smaller value to the min stack
3. For pop operation:
   - Remove the top element from both stacks
4. For top operation:
   - Return the top element of the regular stack
5. For getMin operation:
   - Return the top element of the min stack

### Implement
See the provided code

### Review
- The solution correctly maintains two stacks to track all elements and minimum elements
- All operations are performed in O(1) time complexity
- The code is concise and readable

### Evaluate
- Time Complexity: O(1) for all operations
- Space Complexity: O(n), where n is the number of elements in the stack
  - In the worst case, if elements are pushed in ascending order, both stacks will contain all elements

Pros:
- Achieves O(1) time complexity for all operations, including getMin()
- Simple and straightforward implementation
- Handles edge cases (empty stack) implicitly

Cons:
- Uses extra space to maintain the minimum stack
- Potential for redundant storage in the minimum stack if many elements are equal

Key Insight:
The auxiliary min stack always keeps track of the minimum element for the corresponding state of the main stack. This allows for constant time minimum retrieval without affecting the standard stack operations.