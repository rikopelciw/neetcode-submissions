class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;
        if (s.length() != t.length()) //if unequal can't be anagram
            return false;

        for (int i = 0; i < s.length(); i++) { //creates the unordered frequency map for s
            if (letters.find(s[i]) != letters.end())
                letters[s[i]]++;
            else
                letters.insert({s[i], 1});
        }

        for (int j = 0; j < t.length(); j++) {
            if (letters.find(t[j]) == letters.end() || letters[t[j]] <= 0) { //compares t to frequency map
                return false;
            }
            letters[t[j]]--;
        }
        return true;
    }
};
