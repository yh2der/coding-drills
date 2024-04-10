class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> seen;
        for (int i = 0; i < s1.size(); i++) {
            seen[s1[i]]++;
        }

        int left = 0, right = 0;
        int count = s1.size();
        while (right < s2.size()) {
            // 看right的字元是否在s1出現過 有加上出現次數>0 則把count減1
            if (seen.find(s2[right]) != seen.end() && seen[s2[right]] > 0) {
                count--;
            }
            // 更新seen計數
            if (seen.find(s2[right]) != seen.end()) {
                seen[s2[right]]--;
            }
            // 右指针向右
            right++;

            // 當ocunt為0 代表在s2找到s1的排列組合
            if (count == 0) {
                return true;
            }

            // 窗口要大於s1長度 要縮小 所以left++
            if (right - left == s1.size()) {
                // 如果左指標對應的字符在 seen 中，則恢復對應字符的計數
                if (seen.find(s2[left]) != seen.end()) {
                    seen[s2[left]]++;
                    // 如果恢复后计数大于0，则count需要增加
                    if (seen[s2[left]] > 0) {
                        count++;
                    }
                }
                // 左指针向右移动
                left++;
            }
        }
        return false;
    }
};
