class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        less=[]
        grater=[]
        ith=[]
        for i in range (len(nums)):
            if(nums[i]<pivot):
                less.append(nums[i])
            elif(nums[i]>pivot):
                grater.append(nums[i])
            else:
                ith.append(nums[i])
        return less+ith+grater