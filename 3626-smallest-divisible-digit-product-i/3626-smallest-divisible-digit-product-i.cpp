class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int k = 1;
            int i = n;
            while (i) {
                int rem = i % 10;
                k *= rem;
                i /= 10;
                if (k % t == 0) {
                    return n;
                }
                
            }
            n++;
        }
        return n;
    }
};