class Solution {
public:
    int alternateDigitSum(int n) {
        int k=0;
        while(n){
            int rem=n%10;
            k=k*10+rem;
            n/=10;
        }
        int i=0;
        int sum=0;
        while(k){
            int rem=k%10;
            if(i%2!=0){
                sum-=rem;
            }
            else{
                sum+=rem;
            }
            k/=10;
            i++;
        }
        return sum;
        
    }
};