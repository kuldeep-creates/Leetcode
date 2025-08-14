class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            string k=to_string(nums[i]);
            char m=*max_element(k.begin(),k.end());
            int l=k.size()-1;
            int r=1;
            while(l){
                r=r*10+1;
                l--;
            }
            nums[i]=(m-'0')*r;

        }
        int z=accumulate(nums.begin(),nums.end(),0);
        return z;
    }
};