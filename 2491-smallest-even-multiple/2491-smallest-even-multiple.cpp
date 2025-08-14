class Solution {
public:
    int smallestEvenMultiple(int n) {
        int s=n;
        while(s){
            if(s%2==0 && s%n==0){
                return s;
            }
            else{
                s*=2;
            }
        }
        return 0;
        
    }
};