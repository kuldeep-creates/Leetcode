class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        for(int k=0;k<nums.size();k++){
            if(target<nums[k]){
                return k;
            }
        }
        return nums.size();
        
    }
};