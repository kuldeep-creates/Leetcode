class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                string nums1=to_string(nums[i]);
                string nums2=to_string(nums[j]);
                int num1=nums1[0]-'0';
                int num2=nums2.back()-'0';
                if(gcd(num1,num2)==1){
                    count++;
                }
            }
        }
        return count;
    }
};