class Solution:
    def countTriples(self, n: int) -> int:
        c=0
        for i in range(1,n):
            for j in range(1,n):
                if(i!=j):
                   k=(((i*i)+(j*j))**(0.5))
                   if(k == int(k)):
                    if(k<=n):
                        c+=1  
        return c