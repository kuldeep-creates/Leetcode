class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        k=str(num)
        r=k[::-1]
        z=int(r)
        c=str(z)[::-1]
        if(num==int(c)):
            return True 
        return False
        