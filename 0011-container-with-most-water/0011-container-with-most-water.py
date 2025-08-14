
class Solution:
    def maxArea(self, height: List[int]) -> int:
        area = 0
        j = len(height) - 1
        i = 0
        while i < j:
            present = (min(height[i], height[j])) * (j - i)
            if area < present:
                area = present
            if height[i] > height[j]:
                j -= 1
            else:
                i += 1
        return area
