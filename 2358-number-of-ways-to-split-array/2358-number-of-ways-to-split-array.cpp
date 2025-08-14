class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int  count=0;
        long long sumt=accumulate(nums.begin(),nums.end(),0ll);
        long long sum1=0;
        for (int i=0;i<nums.size()-1;i++){
            sum1+=nums[i];
            if(sum1>=sumt-sum1){
                count+=1;
            }
        }
        return count ;

    }
};