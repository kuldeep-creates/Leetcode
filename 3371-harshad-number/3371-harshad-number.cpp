class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int c=0;
        int r=x;
        while(x){
            int rem=x%10;
            c+=rem;
            x/=10;
        }
        if(r%c==0){
            return c;
        }
        return -1;
    }
};