class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        count=0
        sumt=sum(nums)
        sum1=0
        for i in range(len(nums)-1):
            sum1+=nums[i]
            if(sum1>=sumt-sum1):
                count+=1
        return count 

        