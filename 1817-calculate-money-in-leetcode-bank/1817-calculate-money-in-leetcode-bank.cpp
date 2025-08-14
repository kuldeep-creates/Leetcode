class Solution {
public:
    int totalMoney(int n) {
        int k = 0;
        int l = 0;
        int sum = 0;
        
        while (l <= n) {
            for (int i = 1; i <= 7; i++) {
                sum += (k + i);
                l++;
                if (l >= n) {
                    return sum;
                }
            }
            k++;
        }
        
        return sum;
    }
};
