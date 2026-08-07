class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++) {
            int left = i+1;
            int right = nums.size()-1;
            int target = 0 - nums[i];
            while (right > left) {
                if (nums[left] + nums[right] > target) {
                    right--;
                }
                else if (nums[left] + nums[right] < target) {
                    left++;
                }
                else {
                    result.push_back({nums[i],nums[left],nums[right]});
                    while (left < nums.size()-1 && nums[left] == nums[left+1]) left++;
                    while (right > 0 && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
            }
            while (i < nums.size()-1 && nums[i] == nums[i+1]) {
                i++;
            }
        }
        return result;
    }
};
