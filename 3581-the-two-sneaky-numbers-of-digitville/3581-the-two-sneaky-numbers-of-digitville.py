class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        nums.sort()
        l=[]
        for i in range(len(nums)-1):
            if((nums[i]^nums[i+1])==0):
                l.append(nums[i])
        return l
        