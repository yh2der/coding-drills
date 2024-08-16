# 15. 3Sum

## UMPIRE

### Understand
- Input: An array of integers
- Output: A list of all unique triplets that sum to zero
- The output cannot have duplicate triplets
- The order of output does not matter
- Can the input array be empty? Yes, return an empty list
- Can the input array contain duplicate numbers? Yes
- Are there any constraints on the input array size? 3 <= nums.length <= 3000
- Are there any constraints on the integer values? -10^5 <= nums[i] <= 10^5

### Match
- Two pointers
- Sorting

### Plan
1. Sort the input array in ascending order
2. Iterate through the array with index i:
   - If nums[i] > 0, break (as sum can't be zero with all positive numbers)
   - Skip duplicates for i to avoid duplicate triplets
   - Use two pointers (l and r) to find pairs that sum to -nums[i]
   - Move pointers based on the sum:
     - If sum > 0, decrement r
     - If sum < 0, increment l
     - If sum == 0, add triplet to result and move both pointers
   - Skip duplicates for l to avoid duplicate triplets

### Implement
See the provided code

### Review
- The solution correctly handles duplicate triplets
- It uses sorting and two pointers for efficiency
- Edge cases are handled (breaking when nums[i] > 0)
- The code is concise and readable

### Evaluate
- Time Complexity: O(n^2), where n is the length of the input array
  - Sorting takes O(n log n)
  - The nested loops (for and while) take O(n^2)
- Space Complexity: O(1) excluding the space for output
  - The sorting is done in-place
  - Only a constant amount of extra space is used

Pros:
- Efficient: O(n^2) is optimal for this problem
- Handles duplicates effectively
- Early termination when nums[i] > 0 improves average-case performance

Cons:
- Requires modifying the input array (sorting)
- May not be suitable for very large arrays due to quadratic time complexity