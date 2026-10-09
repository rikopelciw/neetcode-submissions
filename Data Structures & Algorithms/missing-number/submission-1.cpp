class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int calcsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            calcsum += nums[i];
        }
        int sum = (n * (n+1))/2;
        return sum - calcsum;
    }
};
