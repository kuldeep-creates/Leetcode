class Solution:
    def doesValidArrayExist(self, derived: List[int]) -> bool:
        k=0
        for i in derived:
            k^=i
        if(k==0):
            return True
        return False
        