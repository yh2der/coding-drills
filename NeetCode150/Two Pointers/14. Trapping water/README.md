# 42. Trapping Rain Water

## UMPIRE

### Understand
1. Can the input array be empty?
   Yes, and the result should be 0
2. Are all heights non-negative integers?
   Yes
3. Any requirement on time/space complexity?
   Preferably O(n) time and O(1) space

### Match
- Two pointers
- Dynamic programming (optimized to two pointers)

### Plan
General Idea: 
- The original concept involves remembering the maximum height to the left and right of each position. We then choose the smaller of these two heights and subtract the current position's height to determine how much water can be stored. The reason for selecting the smaller height is that the amount of water that can be held between two pillars is determined by the shorter one. If we were to use the taller height, the water would simply spill over the shorter pillar.
- The two-pointer approach optimizes this concept by focusing on the shorter end. We can directly calculate the water stored at the current position by subtracting its height from the height of the shorter end. This works because we know for certain that there's at least one position on the other side that's taller than the current maximum on the shorter side. By always working with the shorter end, we guarantee that we have enough height on the opposite side to hold the water, eliminating the need to check both sides for every position.

1. Initialize `left` pointer at 0 and `right` pointer at the end of the array
2. Initialize `leftMax` and `rightMax` to the heights at `left` and `right` respectively
3. Initialize `result` to 0 to store the total trapped water
4. While `left` is less than `right`:
   1. If `leftMax` is less than `rightMax`:
      - Move `left` pointer to the right
      - Update `leftMax` if necessary
      - Add the difference between `leftMax` and current height to `result`
   2. Else:
      - Move `right` pointer to the left
      - Update `rightMax` if necessary
      - Add the difference between `rightMax` and current height to `result`
5. Return `result`

### Implement
See the provided code

### Review
- The solution correctly handles edge cases (empty input)
- It uses two pointers to efficiently calculate trapped water
- The algorithm maintains the maximum height from both ends, ensuring correct calculation

### Evaluate
- Time Complexity: O(n), where n is the length of the height array
- Space Complexity: O(1), uses only a constant amount of extra space
- Pros:
  - Efficient: Linear time complexity
  - Space-efficient: Constant space complexity
  - Single pass: Solves the problem in one pass through the array
- Cons:
  - Slightly complex logic: The two-pointer approach might be less intuitive at first glance
  - Not easily adaptable: The algorithm is specific to this problem and not easily generalizable