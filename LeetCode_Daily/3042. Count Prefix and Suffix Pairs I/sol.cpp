// mine
class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2) {
        int len1 = str1.size(), len2 = str2.size();

        if (len1 > len2)  return false;

        // prefix
        for (int i=0; i<len1; i++) {
            if (str1[i] != str2[i]) {
                return false;
            }
        }

        // suffix
        for (int i=0; i<len1; i++) {
            if (str1[i] != str2[len2-len1+i]) {
                return false;
            }
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;

        for (int i=0; i<words.size(); i++) {
            for (int j=i+1; j<words.size(); j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    ans++;
                }

            }
        }
        return ans;
    }
};

// trie
class Solution {
private:
    struct TrieNode {
        TrieNode* children[26] = {};
        bool isEnd = false;
        
        void insert(string& s) {
            TrieNode* curr = this;
            for(char c : s) {
                int idx = c - 'a';
                if(!curr->children[idx]) {
                    curr->children[idx] = new TrieNode();
                }
                curr = curr->children[idx];
            }
            curr->isEnd = true;
        }
        
        bool search(string& s) {
            TrieNode* curr = this;
            for(char c : s) {
                int idx = c - 'a';
                if(!curr->children[idx]) return false;
                curr = curr->children[idx];
            }
            return curr->isEnd;
        }
    };
    
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        TrieNode* prefixTrie = new TrieNode();
        TrieNode* suffixTrie = new TrieNode();
        
        for(int i = 0; i < words.size(); i++) {
            string& curr = words[i];
            string reversed = curr;
            reverse(reversed.begin(), reversed.end());
            
            // 检查之前的所有字符串
            string prefix = "";
            for(int j = 0; j < curr.length(); j++) {
                prefix += curr[j];
                string suffix = reversed.substr(0, j + 1);
                reverse(suffix.begin(), suffix.end());
                
                if(prefixTrie->search(prefix) && suffixTrie->search(suffix)) {
                    count++;
                }
            }
            
            // 将当前字符串加入Trie
            prefixTrie->insert(curr);
            suffixTrie->insert(reversed);
        }
        
        // 清理内存
        delete prefixTrie;
        delete suffixTrie;
        
        return count;
    }
};