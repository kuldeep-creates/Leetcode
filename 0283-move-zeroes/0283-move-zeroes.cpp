class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;   
            }
        }
        for (int z=nums.size()-1;z>=k;z--){
            nums[z]=0;
        }
        
    }
};