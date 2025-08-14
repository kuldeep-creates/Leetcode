class Solution:
    def fib(self, n: int) -> int:
        if(n==0):
            return 0
        c=0
        k=1
        z=0
        l=[]
        l.append(c)
        l.append(k)
        for i in range(2,n):
            z=c+k
            c=k
            k=z
            l.append(z)
        k=l[len(l)-1]+l[len(l)-2]
        return k
        