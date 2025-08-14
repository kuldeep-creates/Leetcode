class Solution {
public:
    int numberOfMatches(int n) {
        int c=0;
        if(n==1){
            return 0;
        }
        while(n>1){
            if(n%2==0){
                c+=n-(n/2);
                n=n-(n/2);

            }
            else{
                c+=(n - 1) / 2;
                n=(n - 1) / 2 + 1;
            }
        }
        return c;
        
    }
};