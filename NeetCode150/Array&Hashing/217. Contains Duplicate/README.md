# 217. Contains Duplicate
## Question
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
## Brute Force
If you use double loop to compare each two elements, O(n<sup>2<sup>). It is out of constaints;
## sol 1
Sort the array first, then compare adjacent elements for equality. This operation has a time complexity of O(nlog<sup>n<sup>).
## sol 2
Using a hash set, traverse the array and check if the element has appeared in the set. If not, insert it into the set. This operation has a time complexity of O(n).
## sol 3
When traversing using a hash map, if the value associated with an element in the map is greater than or equal to 1, it indicates that the element is a duplicate, and we return true. Otherwise, we return false. This operation has a time complexity of O(n).