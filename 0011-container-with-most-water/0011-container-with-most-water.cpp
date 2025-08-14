class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int present=0 ,j= height.size()-1;
        for(int i=0;i<height.size();i++){
            present=(min(height[i],height[j]))*(j-i);
            if(area<present){
                area=present;
            }
            if(height[i]>height[j]){
                j--;
                i--;
            }
        }
        return area;
        
    }
};