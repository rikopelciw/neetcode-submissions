class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        int count = 0;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < 32; j++) {
                count += ((i & (1 << j)) != 0);
            }
            result.push_back(count);
            count = 0;
        }
        return result;
    }
};
