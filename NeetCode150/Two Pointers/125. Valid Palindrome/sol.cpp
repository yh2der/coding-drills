#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public :
    bool isPalindrome(string s) {
        int front = 0, end = s.size()-1;

        while (front < end) {
            if (!isalnum(s[front])) {
                front++;
                continue;
            }
            if (!isalnum(s[end]))  {
                end--;
                continue;
            }

            if (tolower(s[front]) != tolower(s[end])) {
                return false;
            } else {
                front++;
                end--;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "was it a car or a cat I saw";
    cout << sol.isPalindrome(s);

    return 0;
}