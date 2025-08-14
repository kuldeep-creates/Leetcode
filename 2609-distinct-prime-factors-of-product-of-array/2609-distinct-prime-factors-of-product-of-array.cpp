class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>dp;
        for(int i=0;i<nums.size();i++){
            for(int j=2;j*j<=nums[i];j++){
                while(nums[i]%j==0){
                     dp.insert(j);
                     nums[i]/=j;
                }
            }
            if(nums[i]>1){
                dp.insert(nums[i]);
            }    
        }
        return dp.size();
    }
};
