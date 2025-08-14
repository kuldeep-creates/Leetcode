class Solution:
    def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
        ans1=0
        ans2=0
        for i in nums1:
            ans1^=i
        for j in nums2:
            ans2^=j
        r=0
        if(len(nums2)%2==1):
            r=r^ans1
        if(len(nums1)%2==1):
            r=r^ans2
        return r
        