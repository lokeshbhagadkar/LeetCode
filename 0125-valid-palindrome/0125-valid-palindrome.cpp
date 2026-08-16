class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        // Note for GitHub
        //         1. isalnum()- is a c++ function that check whether a
        //         character is alphanumerical
        //         2. Alphanumerical = letter + number
        //         isalnum('A')   // true
        // isalnum('z')   // true
        // isalnum('5')   // true

        // isalnum(' ')   // false
        // isalnum(',')   // false
        // isalnum('!')   // false
        while (start <= end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }
};