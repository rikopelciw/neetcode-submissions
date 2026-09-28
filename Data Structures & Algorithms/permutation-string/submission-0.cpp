class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {};
        int l = 0, r = 0;
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }
        while (r < s2.length()) {
            freq[s2[r] - 'a']--;
            while (freq[s2[r] - 'a'] < 0) {
                freq[s2[l] - 'a']++;
                l++;
            }
            if ( r - l + 1 == s1.length())
                return true;
            r++;
        }
        return false;
    }
};
