class Solution {
public:
    int romanToInt(string s) {
        vector<char> roman = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        vector<int> values = {1, 5, 10, 50, 100, 500, 1000};

        int number = 0;
        int previndex=0;

        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = 0; j < roman.size(); j++) {
                if (s[i] == roman[j]) {
                    if(j>=previndex){
                        number+=values[j];
                        previndex=j;
                    }
                    else{
                        number-=values[j];
                    }
                    break;
                }
            }
            
        }
        return number;
    }
};