class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> vec;
        string j = "";
        for (int i = 0; i < s.length(); i++) {
            j += s[i];
            if (j.length() == k) {
                vec.push_back(j);
                j = "";
            }
        }
        if (j.length() > 0) {
            int d=k - j.length();
            for (int i = 0; i < d ; i++) {
                j += fill;
                
            }
            vec.push_back(j);
            
        }
        
        return vec;
    }
};