class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        l=[]
        for i in nums:
            r=str(i)
            for j in r:
                l.append(int(j))
        return l
        
        