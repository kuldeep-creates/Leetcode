class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0){
            return -1;
        }
        int c=0;
        int num=1;
        while(k){
            num%=k;
            c++;
            if(num==0){
                return c;
            }
            num=num*10+1;
        }
        return -1;
        
    }
};