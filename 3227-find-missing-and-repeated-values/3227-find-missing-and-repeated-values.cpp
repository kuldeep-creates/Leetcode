class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int len=grid.size();
        vector<int>nums;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                nums.push_back(grid[i][j]);
            }
        }
        sort(nums.begin(),nums.end());
        int rept=0;
        for(int i=1;i<len*len;i++){
            if(nums[i-1] == nums[i]){
                rept=nums[i];
                break;
            }
        }
        int tsum=accumulate(nums.begin(),nums.end(),0);
        int miss = (((len*len)*(len*len+1))/2);
        vector<int>out={rept,miss-tsum+rept};
        return  out ;
    }
};