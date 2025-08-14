int p(int n){
    long long i=1;
    while(n){
        i=i*2;
        n--;
    }
    return i;
}
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int k=31;
        uint32_t s=0;
        while(n){
            int r=n%2;
            s=s+r*(p(k));
            k--;
            n/=2;
        }
        return s;
    }
};