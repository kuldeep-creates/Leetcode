class Solution:
    def triangleType(self, nums: List[int]) -> str:
        if(nums[0]==nums[1]==nums[2]):
            return "equilateral"
        if(nums[0]+nums[1]>nums[2] and nums[2]+nums[1]>nums[0] and nums[0]+nums[2]>nums[1]):
            if(nums[0]==nums[1] or nums[2]==nums[1] or nums[0]==nums[2]):
                return "isosceles"
        
            if(nums[0]!=nums[1] or nums[2]!=nums[1] or nums[0]!=nums[2]):
                return "scalene"
        return "none"
        