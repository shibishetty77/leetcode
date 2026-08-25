class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans=-1;
        sort(nums.begin(),nums.end());
        ans=nums[nums.size()-k];
        return ans;
    }
};