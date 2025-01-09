// substr
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int n = pref.size();

        for (int i=0; i<words.size(); i++) {
            if (words[i].substr(0, n) == pref) {
                ans++;
            }
        }
        return ans;
    }
};

// find
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for (const string& word : words) {
            if (word.find(pref) == 0) { 
                ans++;
            }
        }
        return ans;
    }
};