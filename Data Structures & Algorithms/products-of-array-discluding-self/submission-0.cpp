class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        bool zeroFlag = false;
        bool zeroFlag2 = false;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0 && zeroFlag) {
                zeroFlag2 = true;
                continue;
            }
            if (nums[i] == 0) {
                zeroFlag = true;
                continue;
            }
            product *= nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (zeroFlag && zeroFlag2) { //two zeroes
                result.push_back(0);
            }
            else if (zeroFlag && nums[i] == 0) { //only zero, on the zero index
                result.push_back(product);
            }
            else if (zeroFlag) { //only zero, not on zero index
                result.push_back(0);
            }
            else {
                result.push_back(product/nums[i]);
            }
        }
        return result;
    }
};
