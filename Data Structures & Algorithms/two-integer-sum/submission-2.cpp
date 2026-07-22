class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> a;
        for (int i = 0; i < nums.size(); i++) {
            //target - current = what we are looking for
            //if we can't find it -> add current to map
            // if we did find it -> return current + map value
            if (a.contains(target-nums[i])) {
                return {a[target-nums[i]], i};
            }
                a.insert({nums[i], i});
        }
    }
};
