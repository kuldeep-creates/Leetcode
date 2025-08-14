class Solution:
    def categorizeBox(self, length: int, width: int, height: int, mass: int) -> str:
        if(length<=10**5 and width<=10**5 and height<=10**5 and mass<=10**3):
            r=""
            s=""

            if(length>=10**4 or width>=10**4 or height>=10**4 or length*width*height>=10**9):
                r="Bulky"
            if(mass>=100):
                s="Heavy"
            if(r=="Bulky" and s=="Heavy"):
                return "Both"
            elif(r!="Bulky" and s=="Heavy"):
                return "Heavy"
            elif(r=="Bulky" and s!="Heavy"):
                return "Bulky"
            else:
                return "Neither"

