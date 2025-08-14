class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>setss;
        for (int i=0;i<=n;i++){
            int count=0;
            int num=i;
            while(num){
                if(num%2==1){
                    count++;
                }
                num/=2;
                
            }
            setss.push_back(count);
        }
        return setss;
    }
};