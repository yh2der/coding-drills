class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        
        // 如果 nums1 長度為奇數，nums2 中的每個數都會出現奇數次
        if (nums1.size() % 2 == 1) {
            for (int num : nums2) {
                ans ^= num;
            }
        }
        
        // 如果 nums2 長度為奇數，nums1 中的每個數都會出現奇數次
        if (nums2.size() % 2 == 1) {
            for (int num : nums1) {
                ans ^= num;
            }
        }
        
        return ans;
    }
};