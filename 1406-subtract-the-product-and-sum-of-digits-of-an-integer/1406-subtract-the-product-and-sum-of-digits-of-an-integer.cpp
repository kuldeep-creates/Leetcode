class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1;
        int add=0;
        while(n){
            int nu=n%10;
            mul*=nu;
            add+=nu;
            n/=10;
        }
        return mul-add;
        
    }
};