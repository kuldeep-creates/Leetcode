class Solution:
    def numberOfSteps(self, num: int) -> int:
        if(num==0):
            return 0
        c=0
        while(num>0):
            if(num%2==0):
                num//=2
                c+=1
            else:
                num-=1
                c+=1
        return c
        