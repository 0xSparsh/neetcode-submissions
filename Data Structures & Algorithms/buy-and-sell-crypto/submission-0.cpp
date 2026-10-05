class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int answer = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                answer = max(profit, answer);
            }
            else {
                l = r;
            }
            r++;
        }
        return answer;
    }
};
