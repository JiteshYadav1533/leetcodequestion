class Solution {
private:
    char lower(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length() - 1;
        while (st < e) {
            if (!isalnum(s[st])) {
                st++;
            } else if (!isalnum(s[e])) {
                e--;
            } else if (lower(s[st])!=lower(s[e])){
                return 0;
            }
            else {
                st++;
                e--;
            }
        }
        return 1;
    }
};