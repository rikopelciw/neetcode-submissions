class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int l = 31, r = 0, result = 0;
        while (r < l) {
            int temp = (n >> r) & 1;
            result = result | (((n >> l) & 1) << r);
            result = result | (temp << l);
            l--;
            r++;
        }
        return result;
    }
};
