class Solution {
public:
    bool isPalindrome(string s) {
        string reduced = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i]))
                reduced += tolower(s[i]);
        }
        cout << reduced << endl;
        for (int i = 0; i < reduced.length()/2; i++) {
            if (reduced[i] != reduced[reduced.length()-i-1])
                return false;
        }
        return true;
    }
};
