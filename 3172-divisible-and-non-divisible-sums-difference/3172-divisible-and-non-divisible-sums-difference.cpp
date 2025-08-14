class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int>n1;
        vector<int>n2;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                n1.push_back(i);
            }
            if(i%m==0){
                n2.push_back(i);
            }
        }
        int k=accumulate(n1.begin(),n1.end(),0);
        int l=accumulate(n2.begin(),n2.end(),0);
        return k-l;
    
        
    }
};