class Solution {
public:
    int pivotInteger(int n) {
        int k=0;
        for (int i=1;i<=n;i++){
            k+=i;
        }
        int c=0;
        for(int i=1;i<=n;i++){
            if((c+i)==(k-c)){
                return i;
            }
            c+=i;
        }
        return -1;
        
    }
};