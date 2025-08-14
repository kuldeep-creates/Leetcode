class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        vector<int> pnums;
        for (int i = left; i <= right; i++) {
            nums.push_back(i);
        }
        for (int n : nums) {
            int k = n;
            int r = 1;
            while (k) {
                int rem = k % 10;
                if (rem == 0) {
                    r=0;
                    break;
                }
                    if (n % rem != 0) {
                        r = 0;
                        break;
                    }
                k/=10;
            }
            if (r) {
                pnums.push_back(n);
            }
        }
        return pnums;
    }
};