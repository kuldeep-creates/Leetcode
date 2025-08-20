class Solution:
    def toHex(self, num: int) -> str:
        if num == 0:
            return "0"
        
        num &= 0xFFFFFFFF  
        
        hex_chars = "0123456789abcdef"
        s = ""
        
        while num > 0:
            rem = num % 16
            s += hex_chars[rem]
            num //= 16
        
        return s[::-1]
