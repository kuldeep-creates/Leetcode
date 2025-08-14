class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        c=0
        for i in range(len(nums)):
            for j in range(i+2,len(nums)):
                if(nums[i]+nums[j]==float(nums[i+1]/2)):
                    c+=1
                    break
                break
        return c

        