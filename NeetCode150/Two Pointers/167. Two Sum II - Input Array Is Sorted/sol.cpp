#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front = 0;
        int end = numbers.size()-1;
        while (front < end) {
            int curSum = numbers[front] + numbers[end];
            
            if (curSum > target)  end--;
            else if (curSum < target)  front++;
            else    return {front + 1, end + 1};
        }

        return {};
    }
};
