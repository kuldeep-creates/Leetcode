class Solution {
public:
    int scoreOfString(string s) {
        int k=0;
        for (int i=1;i<s.size();i++){
            k+=abs(s[i]-s[i-1]);
        }
        return k;
        
    }
};