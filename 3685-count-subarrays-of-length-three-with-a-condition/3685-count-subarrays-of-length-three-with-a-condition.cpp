# include <cmath>
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 2; j < nums.size(); j++) {
                if (nums[i] + nums[j] == double(nums[i + 1]) / 2) {
                    c++;
                    break;
                }
                break;
            }
        }
        return c;
    }
};