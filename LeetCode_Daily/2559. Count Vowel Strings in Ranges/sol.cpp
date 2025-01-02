// O(n^2) -> time limitted
class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0]; 
            int right = queries[i][1]; 
            int count = 0;
            
            while (left <= right) {
                if (isVowel(words[left][0]) && isVowel(words[left][words[left].size() - 1])) {
                    count++;
                }
                left++;
            }
            ans.push_back(count);  
        }
        return ans;
    }
};

// using prefix
class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // 建立前綴和陣列，記錄每個位置前面有多少個符合條件的字串
        vector<int> prefix(words.size() + 1, 0);
        
        // 計算前綴和
        for(int i = 0; i < words.size(); i++) {
            prefix[i + 1] = prefix[i];  // 先複製前一個位置的值
            // 檢查當前字串是否符合條件（開頭和結尾都是母音）
            if(isVowel(words[i][0]) && isVowel(words[i].back())) {
                prefix[i + 1]++;  // 如果符合就加1
            }
        }
        
        // 處理查詢
        vector<int> ans;
        for(const auto& q : queries) {
            // 直接用前綴和相減得到區間和
            ans.push_back(prefix[q[1] + 1] - prefix[q[0]]);
        }
        
        return ans;
    }
};