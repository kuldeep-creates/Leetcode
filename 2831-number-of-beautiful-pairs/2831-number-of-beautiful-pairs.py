class Solution:
    def countBeautifulPairs(self, nums: List[int]) -> int:
        count=0
        for i in range (len(nums)):
            num1=str(nums[i])[0]
            for j in range (i+1,len(nums)):
                num=str(nums[j])
                nums2=num[len(num)-1]
                if(gcd(int(num1),int(nums2))==1):
                    count+=1
        return count