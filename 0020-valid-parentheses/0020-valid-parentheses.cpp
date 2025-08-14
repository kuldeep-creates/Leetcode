
class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2) return false;

        int small = 0, mid = 0, high = 0;
        string lastOpen = ""; 

        for (char i : s) {
            if (i == '(') {
                small++;
                lastOpen.push_back('(');
            }
            else if (i == '[') {
                mid++;
                lastOpen.push_back('[');
            }
            else if (i == '{') {
                high++;
                lastOpen.push_back('{');
            }

            else if (i == ')') {
                if (small == 0 || lastOpen.empty() || lastOpen.back() != '(')
                    return false;
                small--;
                lastOpen.pop_back();
            }
            else if (i == ']') {
                if (mid == 0 || lastOpen.empty() || lastOpen.back() != '[')
                    return false;
                mid--;
                lastOpen.pop_back();
            }
            else if (i == '}') {
                if (high == 0 || lastOpen.empty() || lastOpen.back() != '{')
                    return false;
                high--;
                lastOpen.pop_back();
            }
        }

        if (small || mid || high) return false;
        return true;
    }
};
