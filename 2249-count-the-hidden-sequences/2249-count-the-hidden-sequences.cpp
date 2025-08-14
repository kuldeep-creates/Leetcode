class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long minVal = 0, maxVal = 0, current = 0;
        for (int diff : differences) {
            current += diff;
            minVal = min(minVal, current);
            maxVal = max(maxVal, current);
        }
        long long count=0;
        for(int i=lower;i<=upper;i++){
            long long x=i+minVal,y=i+maxVal;

            if(x>=lower && y<=upper){
                count++;
            }
        }
        return count;
    }
};