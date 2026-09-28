class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxFreq = 0, best = 0;
        int freq[26] = {};
        while (r < s.length()) {
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq, freq[s[r] - 'A']);
            r++;
            while (r - l - maxFreq > k) {
                freq[s[l] - 'A']--;
                l++;
            }
            best = max(best, r - l);
        }
        return best;
    }
};
