class Solution {
public:
    int numberOfCuts(int n) {
        if(n>1){
            if(n%2!=0){
                return n;
            }
            return n/2;
        }
        return 0;
    }
};