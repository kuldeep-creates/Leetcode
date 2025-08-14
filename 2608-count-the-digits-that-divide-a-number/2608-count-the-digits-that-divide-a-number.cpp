class Solution {
public:
    int countDigits(int num) {
        int c=0,num1,num2;
        num2=num;
        while(num!=0){
            num1=num%10;
            if(num1!=0 && num2%num1==0){
                c++;
                
            }
            num/=10;

            
        }
    return c;
        
    }
};