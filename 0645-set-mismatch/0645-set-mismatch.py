class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        nums.sort()
        c=0
        for i in range(len(nums)):
            if(i!=len(nums)-1):
                if((nums[i]^nums[i+1])==0):
                    c=nums[i]
                    break
            else:
                break


            
        l=[]
        l.append(c)
        r=0
        for i in nums:
            if(i!=c):
                r+=i
        j=0
        for i in range(1,len(nums)+1):
            j+=i
        k=j-(r+c)
        l.append(k)
        return l
            



        