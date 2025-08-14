class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(auto item:nums){
            if(item%3!=0){
                c++;
            }
        }
        return c;
        
    }
};