class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int>ind;
        
        while(i<=j){
            if(numbers[i]+numbers[j]==target){
                ind.push_back(i+1);
                ind.push_back(j+1);
                return ind;
            }
            if(numbers[j]+numbers[i]<target){
                i++;
            }
            if(numbers[j]+numbers[i]>target){
                j--;
            }
            
           
        }
        return ind;
        
    }
};