class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        
        // 先計算 words2 中每個字母需要出現的最大次數
        vector<int> maxCount(26, 0);
        for(string& w2 : words2) {
            vector<int> temp(26, 0);
            for(char c : w2) {
                temp[c - 'a']++;
            }
            // 更新最大值
            for(int i = 0; i < 26; i++) {
                maxCount[i] = max(maxCount[i], temp[i]);
            }
        }
        
        for(string& str1 : words1) {
            // 計算 str1 中每個字母出現次數
            vector<int> count(26, 0);
            for(char c : str1) {
                count[c - 'a']++;
            }
            
            // 檢查是否符合要求
            bool valid = true;
            for(int i = 0; i < 26; i++) {
                if(count[i] < maxCount[i]) {
                    valid = false;
                    break;
                }
            }
            
            if(valid) ans.push_back(str1);
        }
        
        return ans;
    }
};