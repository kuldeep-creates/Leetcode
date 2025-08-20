class Solution {
public:
    int getSum(int a, int b) {
        int check=0xFFFFFFFFF;
        while (b!=0){
            int carry=(a&b)&check;
            a=(a^b)&check;
            b=(carry<<1)&check;
        }
        return a<=INT_MAX?a:~(a ^ check);
        
    }
};