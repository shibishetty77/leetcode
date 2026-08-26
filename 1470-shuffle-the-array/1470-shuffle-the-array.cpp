class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int right=0;int left=n;
        while(right<n && left<nums.size()){
            ans.push_back(nums[right]);
            ans.push_back(nums[left]);
            right++;
            left++;
        }
        return ans;
    }
};