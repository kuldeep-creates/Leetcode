class Solution:
    def isFascinating(self, n: int) -> bool:
        t=str(n)+str(2*n)+str(3*n)
        if(len(t)>9):
            return False
        for i in t:
            if(t.count('0')>=1):
                return False
            else:
                if(t.count(i)>1):
                    return False
            
        return True

        