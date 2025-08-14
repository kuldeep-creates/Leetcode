class Solution {
public:
    int countTriples(int n) {
        int c=0;
        for (int i=1;i<n;i++){
            for (int j=1;j<n;j++){
                if(i!=j){
                    double k= sqrt((i*i)+(j*j));
                    if(k==(int)(k)){
                        if(k<=n){
                            c++;
                        }
                    }
                }
            }
        }
        return c;
    }
};