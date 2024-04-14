# MinStack Class

## Description

The MinStack class is a stack data structure with additional functionality to efficiently retrieve the minimum element in constant time. It supports the usual stack operations: push, pop, top, along with a method to get the minimum element.

## Implementation

The MinStack class is implemented using two stacks:
- `regularStack`: This stack stores the actual elements pushed onto the stack.
- `minStack`: This stack keeps track of the current minimum element.

## Operations

1. **push(int x)**:
   - Pushes the element 'x' onto the stack.
   - If the minStack is empty or the new element 'x' is less than or equal to the current minimum (top of minStack), 'x' is also pushed onto minStack.

2. **pop()**:
   - Removes the top element from the stack.
   - If the top element of regularStack is equal to the current minimum (top of minStack), the minimum element is popped from minStack.
   - Complexity: O(1)

3. **top()**:
   - Returns the top element of the stack without removing it.
   - Complexity: O(1)

4. **getMin()**:
   - Returns the current minimum element in the stack.
   - Complexity: O(1)

## Time Complexity

- **push**: O(1)
- **pop**: O(1)
- **top**: O(1)
- **getMin**: O(1)

## Space Complexity

The space complexity of the MinStack class is O(n), where 'n' is the number of elements stored in the stack. This is because we maintain two stacks, regularStack and minStack, both of which may grow with the number of elements pushed onto the stack.
