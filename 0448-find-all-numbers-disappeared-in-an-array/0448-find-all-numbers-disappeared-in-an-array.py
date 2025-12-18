class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n = len(nums)
        d = {i: False for i in range(1, n + 1)}

        nums.sort()
        new=[]
        for i in nums:
            d[i]=True
            
        for i,j in d.items():
            if(j==False):
                new.append(i)    
        
        return new
        