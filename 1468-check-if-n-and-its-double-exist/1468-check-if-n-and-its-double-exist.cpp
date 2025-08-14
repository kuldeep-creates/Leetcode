class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i=0;i<arr.size();i++)
        {
            int j=0;
            while(j<arr.size()){
                if(i!=j && arr[i]==2*arr[j]){
                    return true;
                }
                j++;
            }

        }
        return false;
        
    }
};