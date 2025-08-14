class Solution {
public:
    string findValidPair(string s) {
        vector<int>ch(9,0);
        string j="";
        for(int i=0;i<s.length();i++){
            ch[(s[i]-'0')-1]+=1;
        }
        for(int i=0;i<s.length()-1;i++){
            if(s[i]-'0'==ch[(s[i]-'0')-1] && s[i+1]-'0'==ch[(s[i+1]-'0')-1] &&s[i]!=s[i+1]){
                j+=s[i];
                j+=s[i+1];
                return j;
            }
        }
        return "";
        
    }
};