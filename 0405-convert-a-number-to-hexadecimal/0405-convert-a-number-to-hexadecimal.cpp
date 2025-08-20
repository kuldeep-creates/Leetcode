class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        unsigned int n = num;      
        string hex_chars = "0123456789abcdef";
        string s = "";

        while (n > 0) {
            s += hex_chars[n % 16];
            n /= 16;
        }

        return string(s.rbegin(), s.rend());
    }
};
