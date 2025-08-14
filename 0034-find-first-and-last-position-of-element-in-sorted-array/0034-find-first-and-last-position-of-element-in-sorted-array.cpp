class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>l;
        for (int i=0;i<nums.size();i++){
            if(target==nums[i]){
                l.push_back(i);
            }
        }
        if(l.size()==0){
            l.push_back(-1);
            l.push_back(-1);
            return l;
        }
        vector<int>og;
        og.push_back(l[0]);
        og.push_back(l.back());
        return og;
        
    }
};