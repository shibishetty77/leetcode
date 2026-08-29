class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int cnt=0;
        for (int j = 0; j < nums.size(); j++) {
            int i=0;
            cnt=0;
            while (i<nums.size()) {
                if(nums[i]<nums[j]) {
                    cnt++;
                }
                i++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};