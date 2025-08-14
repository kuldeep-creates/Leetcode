class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long rem=0;
        while(x>0){
            int s=x%10;
            rem=rem*10+s;
            x/=10;
        }
        if(num==rem){
            return true;
        }
        return false;
        
    }
};