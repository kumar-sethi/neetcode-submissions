class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPr= prices[0];
        int maxPr=0;
        for(int i=0; i<prices.size(); i++)
        {
            maxPr = max(maxPr, prices[i] - minPr);
            minPr = min(minPr, prices[i]);
        }
        return maxPr;
    }
};
