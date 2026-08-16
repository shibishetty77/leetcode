class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int i = 1;
        while (i < nums.size()) {
            if (nums[i - 1] == nums[i])
                i = i + 2;
            else{
                    ans.push_back(nums[i-1]);
                    i++;
                }
        }
            if (nums.size() >= 2 && nums[nums.size() - 1] != nums[nums.size() - 2]) {
                ans.push_back(nums[nums.size() - 1]);
        }

        return ans;
    }
};