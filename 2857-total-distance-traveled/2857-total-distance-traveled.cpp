class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int s=0;
        while(mainTank>0){
            if(mainTank<5){
                s+=mainTank;
                mainTank=0;
            }
            else{
                s+=5;
                mainTank-=5;
                if (additionalTank > 0) {
                    mainTank++;
                    additionalTank--; 
                    }
            }

        }
        int km=10*s;
        return km;
        
    }
};