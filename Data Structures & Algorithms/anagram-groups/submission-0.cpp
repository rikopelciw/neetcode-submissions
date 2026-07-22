class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //represent words by some comparable value (frequency map array)
        unordered_map<string,vector<string>> mp;
        for (string i : strs) {
            string sorted = i;
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(i);
        }
        vector<vector<string>> result;
        for (auto i : mp)
            result.push_back(i.second);
        return result;
    }
};
