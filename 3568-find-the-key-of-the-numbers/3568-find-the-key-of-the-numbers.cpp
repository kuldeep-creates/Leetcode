class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int code=0;
        string s="";
        while(num1 || num2 || num3){
            int a,b,c;
            a=num1%10;
            b=num2%10;
            c=num3%10;
            num1/=10;
            num2/=10;
            num3/=10;
            int key=min(a,min(b,c));
            s+=key+'0';
        }
        reverse(s.begin(),s.end());
        code=stoi(s);
        return code;
    }
};