#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;
        
        int maxdiff = 0;
        int m = prices[0];
        for (int j = 1; j < prices.size(); j++) {
            m = min(prices[j], m);
            maxdiff = max(maxdiff, prices[j] - m);
        }
        return maxdiff;
    }
};
