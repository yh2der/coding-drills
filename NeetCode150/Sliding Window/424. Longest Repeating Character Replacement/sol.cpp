#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int maxLen = 0;
        int maxCount = 0;
        vector<int> count(26, 0); // 记录窗口内不同字符出现的次数

        while (right < s.size()) {
            count[s[right] - 'A']++;
            maxCount = max(maxCount, count[s[right] - 'A']);
            
            // 当窗口大小 - 最频繁字符出现次数 > k，表示需要替换超过k个字符，缩小窗口
            if (right - left + 1 - maxCount > k) {
                count[s[left] - 'A']--;
                left++;
            }
            
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        
        return maxLen;
    }
};
