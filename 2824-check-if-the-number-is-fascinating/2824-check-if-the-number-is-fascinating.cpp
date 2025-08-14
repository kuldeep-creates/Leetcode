class Solution {
public:
    bool isFascinating(int n) {
        string s=to_string(n)+to_string(2*n)+to_string(3*n);
        if(s.size()!=9){
            return false;
        }
        set<char>nums={'1','2','3','4','5','6','7','8','9'};
        for (char i:nums){
            int c=0;
            for (int j=0;j<s.size();j++){
                if(s[j]=='0'){
                    return false;
                }
                if(i==s[j]){
                    c++;
                }

            }
            if(c>1){
                return false;
            }
        }
        return true;
        
    }
};