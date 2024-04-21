# 739. Daily Temperatures
---
Given an array of integers `temperatures` represents the daily temperatures, return an array answer such that `answer[i]` is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep `answer[i]` == 0 instead.

Example 1:
>Input: temperatures = [73,74,75,71,69,72,76,73]
>Output: [1,1,4,2,1,1,0,0]

Example 2:
>Input: temperatures = [30,40,50,60]
>Output: [1,1,1,0]

Example 3:
>Input: temperatures = [30,60,90]
>Output: [1,1,0]

Constraints:
* 1 <= `temperatures.length` <= 105
* 30 <= `temperatures[i]` <= 100
---
## UMPIRE
### Understand
根據當天的溫度，計算幾天後可以找到高於當天溫度；如果找不到則`answer[i]`設為0

### Match
* 暴力解(vector)  
* Stack        
### Plan
* 暴力解
* Stack
    *   利用一個loop遍歷，如果`temperatures[i]`溫度>stack的top值，計算`stack.top`和`i`的差存入`answer`，並且stack.pop
    *   每迭代的一個溫度，都會確保`temperatures[i]`>所有stack中的元素對應到的temperature，所以不用擔心某一round比先前所有push進去的值都大而沒有跑到
### Implement

### Review

### Evaluate
* 暴力解
    * 時間複雜度 O(n^2)
    * 空間  O(n)
* Stack
    * 時間 O(n)
    * 空間 O(n)