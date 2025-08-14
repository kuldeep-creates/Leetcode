class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>j;
        int k=floor(sqrt(area));
        for(int w=k;w>0;w--){
            if(area%w==0){
                int l=area/w;
                j.push_back(l);
                j.push_back(w);
                return j;
            }
        }
        return j;
        
    }
};