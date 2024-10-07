class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        # 將位置和速度配對，並按位置降序排序
        pairs = sorted(zip(position, speed), reverse=True)
        
        stack = []
        for p, s in pairs:
            time = (target - p) / s

            if not stack or time > stack[-1]:
                stack.append(time)
        
        return len(stack)