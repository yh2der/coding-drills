#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, right = 0;
        int maxLen = 0;
        
        while (right < s.size()) {
            if (seen.find(s[right]) == seen.end()) {
                seen.insert(s[right]);
                right++;
                maxLen = max(maxLen, right - left);
            } else {
                seen.erase(s[left]);
                left++;
            }
        }
        
        return maxLen;
    }
};
