class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        k=0
        expected=sorted(heights)
        for i in range(len(heights)):
                if(heights[i]!=expected[i]):
                    k+=1
        return k
        