class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        unordered_map<int, int> mp2;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        for (auto i : s) {
            cout << i << " ";
        }
        if (!s.size())
            return 0;
        int count = 1;
        int final = 0;
        for (auto i = s.begin(); i != prev(s.end()); i++) {
            if (*i+1 != *next(i)) {
                final = max(final, count);
                count = 1;
            }
            else
                count++;
        }
        final = max(final, count);
        return final;
    }
};
