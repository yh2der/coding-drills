# 22. Generate Parentheses
--- 
Given `n` pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:
> Input: n = 3
> Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:
> Input: n = 1
> Output: ["()"]

Constraints:
> 1 <= `n` <= 8
---

## UMPIRE
### Understand
> 理解題目
> 想input, output，要包含edge case(面試的話)

找n組括號合理的排列組合
### Match
> 想一下可以用甚麼資料結構跟演算法

可以用遞迴跟回溯來找到所有排列組合，而回溯可以用stack實現
### Plan
> 畫圖跟寫虛擬碼並且
> 確保用高質量的解法

### Implement
> 實作

### Review
> 跑跑看有沒有bug

### Evaluate
> 時間、空間複雜度
> 解法的優缺點
* Time
    * O(2^2n)，遞迴深度最多是2*n
* Space
    * O(n) 