class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0,k=0;
        for(int it:nums){
            if(it%6==0){
                k+=it;
                c++;
            }
        }
        if(c==0){
            return 0;
        }
        return k/c;
        
    }
};