class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int postindex = 0;
        int count = 0;
        int num = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (num == nums[i]) {
                if (count < 2) {
                    nums[postindex] = nums[i];
                    count++;
                    postindex++;
                } 
            } 
            else {
                num = nums[i];
                nums[postindex] = num;
                postindex++;
                count=1;
            }
        }
        cout<<postindex;
        return postindex++;
    }
};