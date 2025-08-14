class Solution {
public:
    int divide(int dividend, int divisor) {
        long long r=(long long )dividend/divisor;
        if(r<INT_MIN){
            return INT_MIN;
        }
        if(r>INT_MAX){
            return INT_MAX;
        }
        int j=r;
        return j;
        
    }
};