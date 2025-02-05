class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;
        if (s1.length() != s2.length()) return false;
        
        vector<int> diff;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }
        
        if (diff.size() != 2) return false;
        
        return (s1[diff[0]] == s2[diff[1]] && 
                s1[diff[1]] == s2[diff[0]]);
    }
};