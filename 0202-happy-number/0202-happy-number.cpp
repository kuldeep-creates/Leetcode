class Solution {
public:
    bool isHappy(int n) {
        vector<int> sn;
        while (n != 1 && find(sn.begin(), sn.end(), n) == sn.end()) {
            sn.push_back(n);
            int z = 0;
            while (n) {
                int num = n % 10;
                z += num * num;
                n /= 10;
            }
            if (z == 1) {
                return true;
            }
            n = z;
        }
        return n == 1;
    }
};

