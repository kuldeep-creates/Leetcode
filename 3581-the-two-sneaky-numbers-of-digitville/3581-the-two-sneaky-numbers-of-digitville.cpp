class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ne;
        for (int i=0;i<nums.size()-1;i++){
            if((nums[i]^nums[i+1])==0){
                ne.push_back(nums[i]);
            }
        }
        return ne;
        
    }
};