// TC : O(n)
// SC : O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int start = 0;
        int result = 0;

        for (int r = 0; r < s.size(); r++) {
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[start]);
                start++;
            }
            charSet.insert(s[r]);
            result = max(result, r - start + 1);
        }
        return result;
    }
};
