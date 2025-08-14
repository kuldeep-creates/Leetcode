class Solution:
    def distanceTraveled(self, mainTank: int, additionalTank: int) -> int:
        s=0
        while(mainTank):
            if(mainTank<5):
                s+=mainTank
                mainTank=0
            else:
                s+=5
                mainTank-=5
                if(additionalTank>0):
                    additionalTank-=1
                    mainTank+=1
        return 10*s


        