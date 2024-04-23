class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int left = 1;
        int right = 0;
        for (int i=0; i<piles.size(); i++) {
            if (piles[i] > right) {
                right = piles[i];
            }
        }        
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int hours = 0;
            for (int pile : piles) {
                hours += (pile + (mid - 1)) / mid; // 向上取整，計算吃完一堆香蕉需要的時間
            }
            if (hours <= H) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};
