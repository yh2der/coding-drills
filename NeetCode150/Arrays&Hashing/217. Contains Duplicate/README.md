# 217. Contains Duplicate
## Question
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

## UMPIRE法則
### Understand
If there is an elements appears at least twice, return 'true'. Otherwise, return 'false'.

### Match
* array and hashing

### Plan
1. Brute Force : using double loop
2. Sort : sort the array first
3. Hash set : using hash set
4. Hash map : using hash map
 
### Implement
see sol.cpp

### Review
* Re-check that your algorithm solves the problem by running through important examples
* Go through it as if you are debugging it, assuming there is a bug

### Evaluate
1. Brute Force
   - Time Complexity: O(n^2)
     * Outer loop runs n-1 times
     * Inner loop runs n/2 times on average
   - Space Complexity: O(1)
   - Pros: Simple to implement, no extra space needed
   - Cons: Inefficient for large arrays

2. Sort
   - Time Complexity: O(n log n)
   - Space Complexity: 
     * O(1) for in-place sorting algorithms (e.g., Heapsort)
     * O(n) for algorithms like Mergesort
   - Pros: Relatively efficient, easy to implement with standard library
   - Cons: Modifies the original array

3. Hash Set
   - Time Complexity: O(n)
   - Space Complexity: O(n)
   - Pros: Very efficient for large arrays
   - Cons: Uses extra space

4. Hash Map
   - Time Complexity: O(n)
   - Space Complexity: O(n)
   - Pros: Very efficient, can also count occurrences
   - Cons: Uses extra space, slightly more complex than Hash Set