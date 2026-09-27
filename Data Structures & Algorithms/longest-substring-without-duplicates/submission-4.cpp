class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (!s.length()) return 0;
        unordered_set<char> seen;
        int l = 0, r = 0, best = 1;
        while (r < s.length()) {
            while (seen.contains(s[r])) {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            r++;
            best = max(best, r-l);
        }
        return best;
    }
};
