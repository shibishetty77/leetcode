class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max;
        int smax;
        if(nums[0]>nums[1])
        {
            max = 0;
            smax = 1;
        }
        else
        {
            max = 1;
            smax = 0;
        }
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] > nums[max]) {
                smax = max;
                max = i;
            } else if (nums[i] > nums[smax]) {
                smax = i;
            }
        }
        if (nums[smax] * 2 <= nums[max])
            return max;
        return -1;
    }
};