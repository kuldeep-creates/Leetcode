#include <cmath>
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        for (int i = 0; i < k; i++) {
            int n = nums[0];
            for (int j = 1; j < nums.size(); j++) {
                if (nums[j] < n) {
                    n = nums[j];
                }
            }
        
            for(int z=0;z<nums.size();z++){
                if(nums[z]==n){
                    nums[z]=-n;
                    break;
                }

            }
        }
        int m=accumulate(nums.begin(),nums.end(),0);


        return m;
        }
    };