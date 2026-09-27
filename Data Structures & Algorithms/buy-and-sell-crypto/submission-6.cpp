class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (!prices.size())
            return 0;
        int l = 0, best = 0, curr = 0;
        for (int r = 1; r < prices.size();) {
            curr = prices[r] - prices[l];
            if (prices[l] > prices[r])
                l++;
            else {
                if (curr > best) best = curr; 
                r++;
            }
        }
        return best;
    }
};
