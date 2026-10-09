class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        for (int k = 0; k < 32; k++) {
            result += (n & (1 << k)) >> k;
        }
        return result;
    }
};
