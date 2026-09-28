class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), mid;
        while (l < r) {
            mid = (l+r)/2;
            if (nums[mid] < target) {
                l = mid+1;
            }
            else if (nums[mid] > target) {
                r = mid;
            }
            else
                return mid;
        }
        return -1;
    }
};
