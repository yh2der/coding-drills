# [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)
## UMPIRE
### Understand

### Match
* Binary Search
### Plan
* 檢查 `nums[mid]` 是否等於目標值 `target`，如果是則返回 `mid`。

* 接下來，判斷左側或右側是有序的。
    - 如果 `nums[left] <= nums[mid]`，表示左半部分是有序的。
        - 如果目標值 `target` 大於 `nums[mid]` 或小於 `nums[left]`，則將搜索範圍縮小為右半部分，因此將 `left` 設置為 `mid + 1`。
        - 否則，將搜索範圍縮小為左半部分，因此將 `right` 設置為 `mid - 1`。
    - 如果 `nums[left] > nums[mid]`，表示右半部分是有序的。
        - 如果目標值 `target` 小於 `nums[mid]` 或大於 `nums[right]`，則將搜索範圍縮小為左半部分，因此將 `right` 設置為 `mid - 1`。
        - 否則，將搜索範圍縮小為右半部分，因此將 `left` 設置為 `mid + 1`。

* *如果在 while 迴圈內未找到目標值，則返回 -1。

### Implement
see sol.cpp
### Review

### Evaluate
* Time Complexity O(log<sup>n<sup>)
* Space Complexity O(1)