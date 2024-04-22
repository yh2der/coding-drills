# 853. Car Fleet
---
There are `n` cars going to the same destination along a one-lane road. The destination is `target` miles away.

You are given two integer array `position` and `speed`, both of length `n`, where `position[i]` is the position of the `ith` car and `speed[i]` is the speed of the `ith` car (in miles per hour).

A car can never pass another car ahead of it, but it can catch up to it and drive bumper to bumper at the same speed. The faster car will slow down to match the slower car's speed. The distance between these two cars is ignored (i.e., they are assumed to have the same position).

A car fleet is some non-empty set of cars driving at the same position and same speed. Note that a single car is also a car fleet.

If a car catches up to a car fleet right at the destination point, it will still be considered as one car fleet.

Return the number of car fleets that will arrive at the destination.

Example 1:
> Input: target = 12, position = [10,8,0,5,3], speed = [2,4,1,1,3]
>Output: 3

Explanation:
>The cars starting at 10 (speed 2) and 8 (speed 4) become a fleet, meeting each other at 12.
>The car starting at 0 does not catch up to any other car, so it is a fleet by itself.
>The cars starting at 5 (speed 1) and 3 (speed 3) become a fleet, meeting each other at 6. The fleet moves at speed 1 until it reaches target.
>Note that no other cars meet these fleets before the destination, so the answer is 3.

Example 2:
>Input: target = 10, position = [3], speed = [3]
>Output: 1
>Explanation: There is only one car, hence there is only one fleet.

Example 3:
>Input: target = 100, position = [0,2,4], speed = [4,2,1]
>Output: 1
>Explanation:
>The cars starting at 0 (speed 4) and 2 (speed 2) become a fleet, meeting each other at 4. The fleet moves at speed 2.
>Then, the fleet (speed 2) and the car starting at 4 (speed 1) become one fleet, meeting each other at 6. The fleet moves at speed 1 until it reaches target.

Constraints:
* `n == position.length == speed.length`
* `1 <= n <= 105`
* `0 < target <= 106`
* `0 <= position[i] < target`
* All the values of `position` are unique.
* `0 < speed[i] <= 106`
---

## UMPIRE
### Understand
計算會有幾個car fleet

* 在只有一線道的馬路所以不能超車，且後車追上前車後便會降速至前車速度(追上後兩車視為同一個位置)，這也形成一個car fleet
* 終點位置才相遇也視為一個car fleet

### Match
* stack
存放fleets

### Plan
1. 宣告一個stack存放fleets；一個vector<pair<int, float>> 存放位置和其到達目的地所需時間
2. 由小到大排序此vector(O(nlog<sup>n<sup>))
3. iterate 整個vector(相當於從離終點最遠的位置開始)，看可不可以追到前車(到終點的時間有沒有比前車小)，如果可以就會是同一個fleet。若可以追到stack中只要留前車因為追到之後速度跟前車保持一樣，最後return時就看stack的長度即是答案

### Implement
see sol.cpp

### Review

### Evaluate
* Time Complexity: O(nlog<sup>n<sup>)
* Space Complexity: O(n)