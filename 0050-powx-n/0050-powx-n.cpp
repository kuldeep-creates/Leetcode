class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        long long na=n;
        if (n < 0) {
            x = 1 / x;
            na=-na;
        }

        double result = 1;
        while (na > 0) {
            if (na % 2 == 1) {
                result *= x;
            }
            na = floor(na/ 2);
            x *= x;
        }
        return result ;
    }
};