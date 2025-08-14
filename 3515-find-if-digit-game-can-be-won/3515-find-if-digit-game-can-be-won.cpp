# include<cmath>
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int r=0,s=0;
        for(int i=0;i<nums.size();i++){
            if(floor(nums[i]/10)){
                r+=nums[i];
            }
            else{
                s+=nums[i];
            }
        }
        if(s>r){
            return true;
        }
        else if(s<r){
            return true;
        }
        else{
        return false;}
        return false;
    }
};