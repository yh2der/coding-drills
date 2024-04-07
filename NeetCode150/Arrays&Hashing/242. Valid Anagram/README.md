# valid anagram
## Brute Force
O(nlogn) 不是很好 這題可以在O(n)解決
```cpp
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
```

## elite's ans
### hash table
```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        
        // Count the frequency of characters in string s
        for (char x : s) {
            count[x - 'a']++;
        }
        
        // Decrement the frequency of characters in string t
        for (char x : t) {
            count[x - 'a']--;
        }
        
        // Check if any character has non-zero frequency
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        
        return true;
    }
};
```

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        
        // Count the frequency of characters in string s
        for (auto x : s) {
            count[x]++;
        }
        
        // Decrement the frequency of characters in string t
        for (auto x : t) {
            count[x]--;
        }
        
        // Check if any character has non-zero frequency
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        
        return true;
    }
};
```

:::warning
使用pair遍歷map用const來確保不會改動值 不用的話編譯過不了
```cpp
for (const std::pair<char, int>& x : count) {
    if (x.second != 0) return false;
}
```
可以直接用auto判斷用哪個型別
```cpp
for (auto& x : count) {
    if (x.second != 0) return false;
}
```
:::