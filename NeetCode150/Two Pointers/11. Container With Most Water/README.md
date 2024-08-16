# 11. Container With Most Water

## UMPIRE

### Understand
- Input: An array of integers where each integer represents the height of a vertical line
- Output: The maximum amount of water a container can store
- The width of the container is the distance between the two lines
- The height of the container is limited by the shorter line
- Are there any constraints on the input array size? 2 <= heights.length <= 10^5
- Are there any constraints on the height values? 0 <= heights[i] <= 10^4

### Match
- Two pointers

### Plan
1. Initialize two pointers: left at the start and right at the end of the array
2. Initialize variables to track current area and maximum area
3. While left pointer is less than right pointer:
   - Calculate current area: width (right - left) * height (min of heights at left and right)
   - Update maximum area if current area is larger
   - Move the pointer with the shorter height inward:
     - If height at left is shorter or equal, move left pointer right
     - Otherwise, move right pointer left
4. Return the maximum area found

### Implement
See sol.cpp

### Review
- The solution correctly uses two pointers to find the maximum area
- It efficiently calculates areas without needing to check all possible combinations
- The code is concise and readable

### Evaluate
- Time Complexity: O(n), where n is the length of the input array
  - The algorithm makes a single pass through the array
- Space Complexity: O(1)
  - Only a constant amount of extra space is used

Pros:
- Efficient: Linear time complexity
- Space-efficient: Constant space complexity
- Simple and intuitive approach

Cons:
- May not be immediately obvious why moving the shorter line inward is optimal
- Not easily adaptable to similar but slightly different problems

Key Insight:
The algorithm works because moving the pointer with the shorter height inward is the only way to potentially increase the area. Moving the pointer with the taller height would only decrease the width and at best maintain the same height, resulting in a smaller area.