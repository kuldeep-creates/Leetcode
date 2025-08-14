class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>sets;
        int r=pow(2,nums.size());
        for (int i=0;i<r;i++){
            vector<int>s;
            for(int k=0;k<nums.size();k++){
                if(i&(1<<k)){
                    s.push_back(nums[k]);
                }
            }
            sets.push_back(s);
        }
        return sets;
        
    }
};