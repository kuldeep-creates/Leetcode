class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        for (int i=0;i<nums.size()-2;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            // else{
            //     i+=2;
            // }
            
        }
        return nums.back();
        
    }
};