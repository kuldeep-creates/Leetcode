class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        l=[]
        for i in range(n):
            l.append(start+(2*i))
        k=0
        for j in l:
            k^=j
        return k


        