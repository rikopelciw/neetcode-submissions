class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector <int> right;
        int product = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i-1 < 0)
                product = 1;
            else
                product*= nums[i-1];
            left.push_back(product);
        }
        product = 1;
        for (int i = nums.size()-1; i >= 0; i--) {
            if (i+1 >= nums.size())
                product = 1;
            else
                product*= nums[i+1];
            left[i] *= product;
        }
        return left;
    }
};
