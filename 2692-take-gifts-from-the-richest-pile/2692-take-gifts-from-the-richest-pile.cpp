class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for (int i = 1; i <= k; i++) {
            long long max = *max_element(gifts.begin(), gifts.end());
            for (int z=0;z<gifts.size();z++){
                if(gifts[z]==max){
                    gifts[z]=sqrt(max);
                    break;
                }
            }
        }
        long long x=0;
        for (int i=0;i<gifts.size();i++){
            x+=gifts[i];
        }
        return x;
    }
};