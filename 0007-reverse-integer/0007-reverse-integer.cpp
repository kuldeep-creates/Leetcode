class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if ((long long)x < INT_MIN || (long long)x > INT_MAX)
            return 0;
        if (x < 0) {
            sign = -1;
            if ((long long)x * -1 > INT_MAX)
                return 0;
            x *= -1;
        }

        int newnum = 0;
        while (x > 0) {
            int rem = x % 10;
            long long temp = (long long)newnum * 10 + rem;
            if (temp > INT_MAX) {
                return 0;
            }

            newnum = temp;
            x /= 10;
        }

        return newnum * sign;
    }
};
