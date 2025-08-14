class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector<int>l;
        for (int i=0;i<nums.size();i++){
            l.push_back(abs(nums[i]));
        }
        int r=*min_element(l.begin(),l.end());
        vector<int>close;
        for (int i:nums){
            if(abs(i)==r){
                close.push_back(i);
            }
        }
        return *max_element(close.begin(),close.end());
        

        
    }
};