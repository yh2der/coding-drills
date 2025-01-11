class Solution {
public:
    bool canConstruct(string s, int k) {
        // 如果 k 大於字串長度，不可能構造出 k 個回文
        if (k > s.length()) return false;
        
        // 統計每個字元出現的次數
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // 計算出現奇數次的字元個數
        int oddCount = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i] % 2 == 1) {
                oddCount++;
            }
        }
        
        // 出現奇數次的字元個數必須 ≤ k
        return oddCount <= k;
    }
};