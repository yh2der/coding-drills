// basic
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};

// better
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        // 按長度排序
        sort(words.begin(), words.end(), 
             [](const string& a, const string& b) {
                 return a.length() < b.length();
             });
        
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            // 只需要和比自己長的字串比較
            for (int j = i + 1; j < words.size(); j++) {
                if (words[j].find(words[i]) != string::npos) {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};

// using KMP
class Solution {
public:
    vector<int> getNext(const string& pattern) {
        vector<int> next(pattern.length());
        next[0] = 0;
        int j = 0;
        for (int i = 1; i < pattern.length(); i++) {
            while (j > 0 && pattern[i] != pattern[j]) {
                j = next[j - 1];
            }
            if (pattern[i] == pattern[j]) {
                j++;
            }
            next[i] = j;
        }
        return next;
    }
    
    bool kmpSearch(const string& text, const string& pattern) {
        if (pattern.empty()) return false;
        vector<int> next = getNext(pattern);
        int j = 0;
        for (int i = 0; i < text.length(); i++) {
            while (j > 0 && text[i] != pattern[j]) {
                j = next[j - 1];
            }
            if (text[i] == pattern[j]) {
                j++;
            }
            if (j == pattern.length()) {
                return true;
            }
        }
        return false;
    }
    
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), 
             [](const string& a, const string& b) {
                 return a.length() < b.length();
             });
        
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (kmpSearch(words[j], words[i])) {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};