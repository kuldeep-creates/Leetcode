class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int pro=0;
        for (int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                pro+=prices[i+1]-prices[i];
            }

        }
        return pro;
        
    }
};