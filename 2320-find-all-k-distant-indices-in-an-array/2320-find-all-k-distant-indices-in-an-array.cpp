class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keys;
        vector<int> outputs;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                keys.push_back(i);
            }
        }
        int j = 0;
        while (j < keys.size()) {
            for (int i = 0; i < nums.size(); i++) {
                int rem = i - keys[j];
                if (rem < 0) {
                    rem *= -1;
                }
                if (rem <= k) {
                    outputs.push_back(i);
                }
                // if(rem > k && i>=j){
                //     break;
                // }
            }
            j++;
        }
        set<int>out(outputs.begin(),outputs.end());
        vector<int>o(out.begin(),out.end());
        return o;
    }
};