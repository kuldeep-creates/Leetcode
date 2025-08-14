class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]^nums[i+1])==0){
            s=nums[i];
            break;}
        }
        vector<int>n;
        n.push_back(s);
        int k=0;
        for (int i=1;i<=nums.size();i++){
            k+=i;
        }
        int l=0;
        for (int j=0;j<nums.size();j++){
            if(nums[j]!=s){
                l+=nums[j];
            }
        }
        int m=k-(l+s);
        n.push_back(m);
        
        
        return n;
        
    }
};