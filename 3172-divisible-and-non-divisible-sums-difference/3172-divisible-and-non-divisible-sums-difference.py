class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        l=[]
        l2=[]
        for i in range(1,n+1):
            if(i%m!=0):
                l.append(i)
            if(i%m==0):
                l2.append(i)
        return sum(l)-sum(l2)
        
        