class Solution {
public:
    int smallestNumber(int n) {
        int i=0;
        while(i<=n){
            if(pow(2,i)>n){
                return (pow(2,i)-1);
            }
            i++;
        }
        return 1;
        
    }
};