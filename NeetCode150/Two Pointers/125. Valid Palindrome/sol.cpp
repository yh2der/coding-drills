class Solution {
public:
    //convert to lowercase
    char toLower(char ch) {
        if (ch>='A' && ch<='Z') {
            ch = ch - 'A' + 'a';
        }
        return ch;
    }
    //check if it is english or number
    bool is_eng_or_num(char ch) {
        if (ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9') {
            return true;
        }
        return false;
    }
    //main
    bool isPalindrome(string s) {
        int front = 0, end = s.size()-1;
        while (front < end) {
            //if not eng or num then pointer++(to ignore non-alphanumeric characters)
            if (!is_eng_or_num(s[front])) {
                front++;
                continue;
            }
            //if not eng or num then pointer--(to ignore non-alphanumeric characters)
            if (!is_eng_or_num(s[end])) {
                end--;
                continue;
            }
            if (toLower(s[front]) != toLower(s[end])) {
                return false;
            }
            else {
                front++;
                end--;
            }
        }
        return true;
    }
};