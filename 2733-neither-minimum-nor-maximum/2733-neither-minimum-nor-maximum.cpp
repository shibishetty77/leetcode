class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = 0;
        int max = nums.size() - 1;
        int i = 1;
        while (i < nums.size()) {
            if (nums[i] > nums[min] && nums[i] < nums[max] &&
                nums[i] != nums[i + 1]) {
                return nums[i];
            }
            i++;
        }
        return -1;
    }
};