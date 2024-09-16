class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = 101
        curProfit = 0
        profit = 0

        for i in prices:
            if i < buy:
                buy = i
            curProfit = i - buy
            profit = max(curProfit, profit)

        return profit