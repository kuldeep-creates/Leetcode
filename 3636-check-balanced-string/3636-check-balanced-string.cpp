class Solution {
public:
    bool isBalanced(string num) {
        long long odd=0;
        long long even=0;
        for (int i=0;i<num.length();){
            odd+=num[i]-'0';
            i+=2;
        }
        for (int i=1;i<num.length();){
            even+=num[i]-'0';
            i+=2;
        }

        return even == odd;
            
        
    }
};