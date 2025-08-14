class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        while(min!=0){
            int e=min; 
            min=max%min;
            max=e;
        }
        return max;
        
    }

};