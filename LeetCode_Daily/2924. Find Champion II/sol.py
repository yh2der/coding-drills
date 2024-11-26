class Solution:
    def findChampion(self, n: int, edges: List[List[int]]) -> int:
        indegree = [0] * n

        for _, loser in edges:
            indegree[loser] += 1
        
        champion = -1

        for i in range(n):
            if indegree[i] == 0:
                if champion != -1:
                    return -1
                champion = i
        
        return champion