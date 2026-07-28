class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        return (nums[j]-1)*(nums[j-1]-1);
    }
};