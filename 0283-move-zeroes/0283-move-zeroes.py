class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        j=0
        c=0
        for i in range(len(nums)):
            if(nums[i]!=0):
                nums[j]=nums[i]
                j+=1
                c+=1
        for i in range(len(nums)-1,c-1,-1):
            nums[i]=0


        """
        Do not return anything, modify nums in-place instead.
        """
        