class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i:nums){
            if(count(nums.begin(),nums.end(),i)==1){
                return i;
            }
        }
        return 0;
        
    }
};