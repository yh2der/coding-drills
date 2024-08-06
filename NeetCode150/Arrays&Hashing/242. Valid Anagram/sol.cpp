//Brute Force
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())   return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) return true;
        else    return false;
    }
};

//hash map
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;
        for (char ch : s) {
            seen[ch]++;
        }
        for (char ch : t) {
            seen[ch]--;
        }
        for (auto pair : seen) {
            if (pair.second != 0) {
                return false;
            }
        }
        return true;
    }
};