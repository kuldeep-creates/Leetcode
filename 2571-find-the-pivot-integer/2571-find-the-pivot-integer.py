class Solution:
    def pivotInteger(self, n: int) -> int:
        s=0
        for i in range(1,n+1):
            s+=i
        c=0
        for i in range(1,n+1):
            if((c+i)==(s-c)):
                return i
            c+=i
            
        return -1
        