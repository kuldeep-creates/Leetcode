class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c;

        for (int j = 0; j < nums.size(); j++) {
            c = 1;
            for (int k = j + 1; k < nums.size(); k++) {
                if (nums[j] == nums[k]) {
                    c++;
                }
            }
            if (c > nums.size() / 2) {
                return nums[j];
            }
        }

        return 0;
    }
};