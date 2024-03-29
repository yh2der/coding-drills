class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxVolume = 0;
        int currentMax = 0;

        while (left < right) {
            //看前後比對的哪一個大
            if (height[left] >= height[right]) {
                currentMax = height[right] * (right-left);
            }
            else {
                currentMax = height[left] * (right-left);
            }
            //若體積>目前最大就更新最大值
            if (currentMax > maxVolume) {
                maxVolume = currentMax;
            }
            //左指標往右移 右指標往左移(第一次寫的時候沒注意到)
            if (height[left] <= height[right]) {
                left++; 
            } else {
                right--;
            }
        }
        return maxVolume;
    }
};