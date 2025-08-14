class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        l=[]
        for i in range(2**len(nums)):
            k=[]
            for j in range(len(nums)):
                if((i&1<<j)!=0):
                    k.append(nums[j])
            l.append(k)
        return l
        