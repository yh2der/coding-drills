class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l = 1
        r = max(piles)
        while l < r:
            k = (r - l) // 2 + l
            hours = 0
            for pile in piles:
                hours += (pile - 1) // k + 1
            if hours > h:
                l = k + 1
            else:
                r = k
        return l      