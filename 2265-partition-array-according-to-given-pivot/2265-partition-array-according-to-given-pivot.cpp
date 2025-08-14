class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>less;
        vector<int>grater;
        vector<int>ith;
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                grater.push_back(nums[i]);
            }
            else{
                ith.push_back(nums[i]);
            }
        }
        for(int i=0;i<ith.size();i++){
            less.push_back(ith[i]);
        }
        for(int i=0;i<grater.size();i++){
            less.push_back(grater[i]);
        }
        return less;
    }
};
        
