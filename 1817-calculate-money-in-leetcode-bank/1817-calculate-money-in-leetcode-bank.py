class Solution:
    def totalMoney(self, n: int) -> int:
        r=0
        k=0
        c=0
        while(r<=n):
            for i in range(1,8):
                c+=(k+i)
                r+=1
                if(r>=n):
                    return c
                
            k+=1
        return c
        