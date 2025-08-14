class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l=[]
        for i in range(len(nums)):
            if(target==nums[i]):
                l.append(i)
        k=[]
        if(len(l)==0):
            return [-1,-1]
        k.append(l[0])
        k.append(l[len(l)-1])
        
        return k

        