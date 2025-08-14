class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows >= s.length() || numRows==1) {
            return s;
        }
        int itr = 2 * numRows - 2;
        int i = 0;
        int prev = itr;
        int next = 0;
        string output = "";
        int j = i;
        for (int i = 0; i < numRows; i++) {
            int j = i;
            int prev = itr - 2 * i;
            int next = 2 * i;

            if (prev == 0)
                prev = itr;
            if (next == 0)
                next = itr;

            bool toggle = true;

            while (j < s.length()) {
                output += s[j];
                if (i == 0 || i == numRows - 1) {
                    j += itr;
                } else {
                    j += toggle ? prev : next;
                    toggle = !toggle;
                }
            }
        }
        return output;
    }
};