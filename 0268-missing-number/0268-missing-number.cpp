class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        int sum=(1+nums.size())*nums.size()/2;
        return sum-s;
        
    }
};