class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        maxVal = max(nums)
        minVal = min(nums)
        hashset = set(nums)

        curCount = 0
        maxCount = 0
        for i in range(minVal, maxVal+1):
            if i in hashset:
                curCount += 1
            else:
                curCount = 0
            maxCount = max(curCount, maxCount)

        return maxCount