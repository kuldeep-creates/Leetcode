class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        if (nums.size()<=100  && k<=10 && multiplier<=5){
        
        while(k>=1){
            int cmin=nums[0];
            for(int z=0;z<nums.size();z++){
                if(nums[z]<cmin){
                    cmin=nums[z];
                }
            }
            for(int i=0;i<nums.size();i++){
                
                if(nums[i]==cmin){
                    nums[i]*=multiplier;
                    break;
                }

            
            }
            k--;

        }}
        return nums;
        
    }
};