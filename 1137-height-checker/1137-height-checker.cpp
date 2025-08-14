class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int k=0;
        vector<int>c=heights;
        sort(c.begin(),c.end());
        for (int i=0;i<heights.size();i++){
            if(heights[i]!=c[i]){
                k++;
            }
        }
        return k;
        
    }
};