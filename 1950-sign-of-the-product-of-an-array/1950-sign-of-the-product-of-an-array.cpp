class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long k=1;
        for (int i=0;i<nums.size();i++){
            if(nums[i]<0){
                k*=-1;
            }
            if(nums[i]>0){
                k*=1;
            }
            if(nums[i]==0){
                return 0;
            }
        }
        if(k<0){
            return -1;
        }
        if(k>0){
            return 1;
        }
        return 0;
        
    }
};