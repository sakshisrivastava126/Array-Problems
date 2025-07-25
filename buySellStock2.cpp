class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0, r=1;
        int profit = 0;
        //basically sare consecutive store kr rhe profits
        //just check can we make a profit? if yes add it!
        while(r < prices.size()){
            if(prices[r]>prices[l]){
                profit += prices[r] - prices[l];
            }
            l = r;
            r++;
        }
        return profit;
    }
};
