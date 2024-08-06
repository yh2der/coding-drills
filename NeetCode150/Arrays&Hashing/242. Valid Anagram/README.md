# valid anagram
## Qustion
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.


## UMPIRE法則
### Understand
If string s and string t have same length and character, it is called anagram and return 'true', otherwise, return 'false'

### Match
* array and hashing

### Plan
1. Brute Force : sort these two string frist then compare
2. Hash map : using hash map
 
### Implement
see sol.cpp

### Review
* Re-check that your algorithm solves the problem by running through important examples
* Go through it as if you are debugging it, assuming there is a bug

### Evaluate
1. Brute Force
    * Time Complexity: O(n log n)
        * Sorting dominates the time complexity
    * Space Complexity: O(1) or O(n)
        * Depends on the sorting algorithm used
    * Pros:
        * Simple to implement
        * No extra data structure needed
    * Cons:
        * Modifies original strings
        * Less efficient than linear time solutions for large inputs

2. Hash Map
    * Time Complexity: O(n)
        * Three separate loops, each O(n)
    * Space Complexity: O(k), where k is the size of the character set
        * In practice, often O(1) if character set is limited (e.g., lowercase English letters)
    * Pros:
        * Very efficient, linear time complexity
        * Doesn't modify original strings
    * Cons:
        * Uses extra space for the hash map
        * Slightly more complex implementation


:::warning
使用pair遍歷map用const來確保不會改動值 不用的話編譯過不了
```cpp
for (const std::pair<char, int>& x : count) {
    if (x.second != 0) return false;
}
```
可以直接用auto判斷用哪個型別
```cpp
for (auto& x : count) {
    if (x.second != 0) return false;
}
```
:::