# [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/description/)
## UMPIRE
### Understand
* 一次吃完的話，那一個小時就只能吃那一堆，所以假設有`n`堆，小時數至少大於等於`n`
* 最多那堆當成`k`一定是一個解再超過這個的樹也沒有意義，因此只需要從1到`k`之間去搜尋

### Match
* Binary Search

### Plan
* 先找到最大堆
* 在1~最大堆之間二元搜尋並計算全部吃完的`hours`，若 <= H 將`right`設成`mid`，否則將`left`設成`mid`+1

### Implement
See sol.cpp

### Review

### Evaluate
* Time Complexity O(nlog<sup>n<sup>)
* Space Complexity O(1)