class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int buy = prices[0];
        int profit = 0;
        int curPro = 0;

        for (int i=1; i<prices.size(); i++) {
            if (prices[i] < buy)    buy = prices[i];
            else {
                curPro = prices[i] - buy;
                profit = max(curPro, profit);
            }
        }
        return profit;
    }
};
