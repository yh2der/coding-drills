# [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)
## UMPIRE
### Understand
* 題目要求時間複雜度O(log<sup>n<sup>)，因此暴力解不行
* 因為input是一個升序地翻轉，翻轉後會分成兩portion，分別也是升序的
* 利用上一點找出規律，執行二分搜尋
### Match
* Binary Search
### Plan
* 用`left`和`right`來當作搜尋範圍
* 當`nums[mid]`大於`nums[right]`時，最小值一定在右半部所以`left = mid + 1`，否則`right = mid`(最小值在左半部且可能是`nums[mid]`本身，因此不是`mid - 1`)。
> ex. {3, 4, 5, 1, 2}
>     {4, 5, 1, 2, 3}
>     {5, 1, 2, 3, 4}
* 直到兩個指標重疊跳出while，`nums[left]`即是最小值
### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(log<sup>n<sup>)
* Space Complexity O(1)