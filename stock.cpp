class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro =0;
        int minPro = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            minPro = min(minPro, prices[i]);
            maxPro = max(maxPro, prices[i] - minPro);
        }
        return maxPro;
    }
};
