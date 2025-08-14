class Solution {
public:
    int addDigits(int num) {
        int k;
        while(num){
            int z=0;
            while(num){
                k=num%10;
                z+=k;
                num/=10;    
            }
            if(z/10!=0){
                num=z;
            }
            else{
                return z;
            }
        }
        return num;
        
    }
};