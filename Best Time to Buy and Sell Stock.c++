class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};

prices =[3,2,4,5,3,6]
maxProfit=0
minPrice=INT_MAX
i=0
prices[i]=3
minPrice=3
maxProfit=0
i=1
prices[i]=2
minPrice=2
maxProfit=0
i=2
maxProfit=2
minProfit=2
i=3
