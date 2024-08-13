# 128. Longest Consecutive Sequence
## UMPIRE
### Understand
- Can the input array be empty?
    yes
- Any requirement on time/space complexity?
    You must write an algorithm that runs in O(n) time
- What should we return if there is no subsequence with consecutive elements?
    return 0
- What should I return for an empty array?
    return 0
- What should we return if there are duplicate elements in the subsequence?
    Duplicates don't add to the count

### Match
- array and hashing

### Plan
General Idea : Use a hash set to efficiently check for the presence of elements. For each element n, if n-1 is not found in the set, consider n as the starting point of a potential consecutive sequence.

1. Initialize a hash set `numSet` with the elements from the given array `nums`.
2. Traverse each element in `nums`:
   1. If `nums[i] - 1` doesn’t exist in `numSet`, consider `nums[i]` as the starting point of a sequence.
   2. Initialize a variable `length` to 1, which will track the length of the current sequence.
   3. While loop: Continue checking if `nums[i] + length` exists in `numSet`.
      - If it does, increment `length` by 1 to include this number in the sequence.
   4. Update the maximum sequence length (`longest`) by comparing it with the current sequence length (`length`).
3. Return the value of `longest`, which will be the length of the longest consecutive sequence in `nums`.


### Implement
see sol.cpp

### Review

### Evaluate
- Time Complexity : O(n), which `n` is the length of `numSet`
- Space Complexity : O(n), which `n` is the length of `numSet`
- Pros
    - Efficiency
    - Simplicity
    - No sorting required
- Cons
    - Space required