class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int k=0;
        if(nums1.size()%2==1){
            for(int i:nums2){
                k^=i;
            }
        }
        if(nums2.size()%2==1){
            for(int i:nums1){
                k^=i;
            }
        }
        return k;
    }
};