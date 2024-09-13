class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1

        maxSum = 0
        curSum = 0
        while l < r:
            if heights[l] <= heights[r]:
                curSum = heights[l] * (r - l)
                l += 1
            else:
                curSum = heights[r] * (r - l)
                r -= 1
            maxSum = max(curSum, maxSum)
        return maxSum