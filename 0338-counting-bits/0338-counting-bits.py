class Solution:
    def countBits(self, n: int) -> List[int]:
        l=[]
        for i in range(n+1):
            c=0
            num=i
            while(num):
                if(num%2==1):
                    c+=1
                num//=2
            l.append(c)
        return l

