class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX;
        int ans = 0;

        for(int i = 0; i < prices.size(); i++){
            minn = min(minn, prices[i]);
            int temp = prices[i] - minn;
            ans = max(ans, temp);
        }
    return ans;
    }
};
