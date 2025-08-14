class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        r=0
        s=0
        for i in range(len(nums)):
            
            if(nums[i]//10>=1):
                r+=nums[i]
            else:
                s+=nums[i]
        if(s>r):
            return True
        elif(s<r):
            return True
        else:
            return False
        return False
        