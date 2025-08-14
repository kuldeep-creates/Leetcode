class Solution:
    def isPalindrome(self,s: str) -> bool:
        n=""
        j=""
        for i in range(0,len(s)):
            if(s[i].isalnum()):
                j+=s[i].lower()
        return j==j[::-1]
        