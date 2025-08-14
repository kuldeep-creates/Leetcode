
from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        
        r = ""
        for i in range(len(strs[0])):
            s = True
            for j in range(1, len(strs)):
                if i >= len(strs[j]) or strs[0][i] != strs[j][i]:
                    return r
            if s:
                r += strs[0][i]
        return r
