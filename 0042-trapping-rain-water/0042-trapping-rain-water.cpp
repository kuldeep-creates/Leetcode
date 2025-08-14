class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<2)
            return 0;
        
        int left=height[0],right=height.back();   
        vector<int>lefta;
        vector<int>righta;
        for(int i=0;i<height.size();i++){
            if(left<height[i]){
                left=height[i];
                lefta.push_back(left);
            }
            else{
                lefta.push_back(left);

            }
        }
        for(int i=height.size()-1;i>=0;i--){
            if(right<height[i]){
                right=height[i];
                righta.push_back(right);
            }
            else{
                righta.push_back(right);
            }
        }
        reverse(righta.begin(),righta.end());
        int water=0;
        for(int i=0;i<height.size();i++){
            int k=(min(lefta[i],righta[i])-height[i]);
            if(k>0){
                water+=k;
            }
        }
        return water;
        
        
    }
};