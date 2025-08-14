class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        long long k=0,i=1;
        while(k<=n){
            k+=i;
            if(k>n){
                return count;
            }
            i++;
            count++;
            
        }
        return count;
        
        
    }
};