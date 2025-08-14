class Solution {
public:
    int titleToNumber(string columnTitle) {
        int expo=0;
        int column=0;
        for(int i=columnTitle.length()-1;i>=0;i--){
            int number=columnTitle[i]-char(64);
            int power=pow(26,expo);
            column+=number*power;
            expo++;
        }
        return column;
        
        
    }
};