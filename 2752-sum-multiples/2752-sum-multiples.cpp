class Solution {
public:
    int sumOfMultiples(int n) {
        int i=0;
        for(int j=3;j<=n;j++){
            if(j%3==0 ||j%5==0 ||j%7==0){
                i+=j;
            }
        }
        return i;
    }
};