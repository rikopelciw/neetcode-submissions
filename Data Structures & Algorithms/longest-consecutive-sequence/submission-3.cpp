class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int i : nums) {
            s.insert(i);
        }
        int count = 0;
        int final = 0;
        for (auto i = s.begin(); i != s.end(); i++) {
            if (!s.contains(*i-1)) {
                int j = *i;
                while (s.contains(j)) {
                    count++;
                    j++;
                }
            }
            final = max(final, count);
            count = 0;
        }
        return final;
    }
};
