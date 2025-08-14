class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0;
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[prev] != nums[i]) {
                prev++;
                nums[prev] = nums[i];
                k++;
            }
        }

        return k;
    }
};