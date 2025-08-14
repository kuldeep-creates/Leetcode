
# include<cmath>
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int s=0;
        for (int i=0;i<nums.size();i++){
            int c=0;
            while(nums[i]){
                c++;
                nums[i]/=10;
            }
            
            
            if (c%2==0){
                s++;
            }

            
        }
        return s;
        
    }
};