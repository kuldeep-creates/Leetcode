class Solution {
public:
    string largestGoodInteger(string num) {
    int maxnum = -1;
    string output="";
        for (int i = 1; i < num.length()-1; i++) {
        if(num[i-1]==num[i] && num[i+1]==num[i]){
                string s = string(3,num[i]);
                int k = stoi(s); 
                if (k > maxnum) {
                    maxnum = k;
                    output=s;
                }}}
    return maxnum == -1 ? "" : output;
        
    }
};