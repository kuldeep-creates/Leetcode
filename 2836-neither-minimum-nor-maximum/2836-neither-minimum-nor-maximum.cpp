class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3){
            return -1;
        }
        int max=nums[0];
        int min=nums[0];
        for (int  i=1;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }

        }
        for(int j=1;j<nums.size();j++){
            if(min>nums[j]){
                min=nums[j];
            }
        }
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=max && nums[i]!=min){
                return nums[i];
            }
        }
        return -1;
    }
};