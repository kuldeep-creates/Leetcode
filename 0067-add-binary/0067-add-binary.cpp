class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;
        string s="";
        int count=0;
        while(i>=0 || j>=0){
        int sum=0;
            if(i>=0){
                sum+=a[i--]-'0';

            }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            sum+=count;
            s += (sum % 2) + '0';
            count = sum / 2;

        }
        if(count==1){
            s+='1';
        }
        
        reverse(s.begin(),s.end());
        return s;
        
    }
};