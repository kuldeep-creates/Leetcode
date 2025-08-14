class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:
            r=haystack.index(needle)
            return r
        else:
            return -1

        