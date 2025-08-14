class Solution {
public:
    int countEven(int num) {
        long long s = 0;
        int i = 2;
        while (i <= num) {
            int z = 0;
            int k=i;
            while (k) {
                int r=k%10;


                z+=r;
                k/= 10;
            }
            if (z % 2==0 ) {
                s++;
            }
            i++;
        }
        return s;
    }
};