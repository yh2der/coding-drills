# 1.Two sum
## Question
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

## UMPIRE法則
### Understand
* Find the indexes whose summation is equal to target.
* Edge Cases: Empty array, single element array

### Match
* array and hashing

### Plan
#### Method 1: Brute Force
1. Algorithm Description:
   - Use two nested loops to check each pair of elements to find a pair whose sum equals the target.
2. Steps in Detail:
   1. Initialize an outer loop with the variable `i` ranging from `0` to `nums.size() - 1`.
   2. Inside the outer loop, initialize an inner loop with the variable `j` ranging from `i + 1` to `nums.size() - 1`.
   3. In the inner loop, check if `nums[i] + nums[j]` equals `target`.
   4. If they are equal, return the indices `i` and `j`.

#### Method 2: Hash Map
1. Algorithm Description:
   - Use a hash map to store each element and its index, and find the required pair in a single pass through the array.
2. Steps in Detail:
   1. Create an empty hash map `map`.
   2. Iterate over the array `nums` with the variable `i` ranging from `0` to `nums.size() - 1`:
      1. Calculate the complement of the current element as `complement = target - nums[i]`.
      2. Check if `complement` exists in the `map`:
         - If it exists, return `map[complement]` and `i`.
         - If it doesn't exist, insert `nums[i]` and `i` into the `map`.
 
### Implement
see sol.cpp

### Review
* Re-check that your algorithm solves the problem by running through important examples
* Go through it as if you are debugging it, assuming there is a bug

### Evaluate
* Brute Force
    1. Time Complexity: O(n^2)
    2. Space Complexity: O(1)
    3. pros
        * Simple to implement
        * No additional data structures needed
    4. cons
        * Inefficient for large arrayts due to quadratic time complexity
        * Not suitable for performance-critical applications
* Hash Map
    1. Time Complexity: O(n)
    2. Space Complexity: O(n)  
    3. pros
        * Efficient with linear time complexity.
        * Suitable for large arrays.
    4. cons
        * Requires additional space for the hash map.
        * Slightly more complex to implement compared to brute force.     