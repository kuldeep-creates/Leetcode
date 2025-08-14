class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int c=accumulate(nums.begin(),nums.end(),0);
        int j=0;
        for(int i:nums){
            while(i){
                int rem=i%10;
                j+=rem;
                i/=10;
            }
        }
        return abs(c-j);
        
    }
};