class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> maxHeap;
        for (int i : nums) {
            mp[i]++;
        }
        //number -> freq
        for (auto i : mp) {
            maxHeap.push({i.second, i.first});
        }
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;
    }
};
