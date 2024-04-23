# (74. Search a 2D Matrix)[https://leetcode.com/problems/search-a-2d-matrix/description/]

## 直覺
* 第一想法是暴力解，兩層迴圈一個一個遍歷，但有規定時間複雜度所以不行
* 後來想到先找在哪一列再去遍歷那一列找

## UMPIRE
### Understand
* 題目限制時間複雜度`O(log(m * n))`，所以暴力解不行
* 把二維陣列視成一長串，每一次找整串的中間值，透過二元搜尋達成

### Match
* Binary Search
根據限制很明顯需要透過此方法來達成O(log(m * n))

### Plan
1. 宣告`row`和`col`分別代表有幾列以及幾行
2. 宣告`start`和`end`為搜尋範圍的起始以及結束位置
3. 關鍵在於利用整串的中間位置除以`col`來看在第幾列第幾行，`matrix[mid / cols][mid % cols]`
4. 接著就是判斷`target`大於或小於中間值去移動搜尋起點以及終點

### Implement
See sol.cpp

### Review

### Evaluate
* Time Complexity O(log(m*n))
* Space Complexity O(1)