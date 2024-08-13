# 49. Group Anagrams
## Question
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## UMPIRE法則
### Understand
- An anagram means they have same number of letters, but their order could be different
- So we can sort the array first and use hash map to get answer
- Edge Case
    -   Empty Input:
        If the input vector is empty, the function should return an empty vector immediately.
    - Single String:
        If the input vector contains only one string, the result should be a vector containing a single group with that string.
    - All Strings Are Anagrams:
        If all strings in the input vector are anagrams of each other, the result should be a single group containing all strings.
    - No Anagrams:
        If no strings in the input vector are anagrams of each other, each string should be in its own group.
### Match
* array and hashing

### Plan
#### Method 1: Hash Map
1. Algorithm Description:
    - Sort the array first and put in a hash map
    - Convert grouped result into a two-dimensional vector
2. Details
    Function groupAnagrams(`strs`):
    # Step 1: Check if input is empty
    If strs is empty:
        Return empty list

    # Step 2: Create a hash map to store groups of anagrams
    Initialize an empty hash map called `groups`

    # Step 3: Sort each string and use it as a key in the hash map
    For each string `str` in `strs`:
        Sort the characters in `str` to get `sortedStr`
        If `sortedStr` is not in `groups`:
            Initialize an empty list for `sortedStr` in `groups`
        Append `str` to the list corresponding to `sortedStr` in `groups`

    # Step 4: Convert the hash map to a two-dimensional list
    Initialize an empty list called `result`
    For each key-value pair in `groups`:
        Append the value (list of anagrams) to `result`

    # Step 5: Return the result
    Return `result`
     
### Implement
see sol.cpp

### Review
- Re-check that your algorithm solves the problem by running through important examples
- Go through it as if you are debugging it, assuming there is a bug

### Evaluate
- Hash Map
    - Time Complexity: \(O(k \cdot n \log n)\)
        - Sorting: Sorting each string takes \(O(n \log n)\), where \(n\) is the length of the string.
        - Iteration and Insertion: Iterating through all the strings and inserting them into the hash map takes \(O(k \cdot n \log n)\),    where \(k\) is the number of strings.
        - Therefore, the overall time complexity is \(O(k \cdot n \log n)\).

    - Space Complexity: \(O(k \cdot n)\)
        - Hash Map Storage: The hash map uses \(O(k \cdot n)\) space to store the strings, where \(k\) is the number of strings and \(n\) is the length of each string.
        - Sorted Strings Storage: Storing the sorted strings also requires \(O(k \cdot n)\) space.
        - Therefore, the overall space complexity is \(O(k \cdot n)\).

    - Pros:
        1. **Efficient Grouping**: The algorithm efficiently groups anagrams using sorting and hash maps.
        2. **Scalability**: Handles large inputs effectively due to the use of hash maps and sorting.
        3. **Simple Implementation**: The approach is straightforward and easy to understand.

    - Cons:
        1. **Sorting Overhead**: Sorting each string introduces additional computational overhead, which can be significant for very large strings.
        2. **Space Usage**: The use of additional space for the hash map and sorted strings can be a limitation for very large datasets.
        3. **Hash Map Collision**: In the rare case of hash collisions, performance might degrade slightly, though this is generally minimal with good hash functions.