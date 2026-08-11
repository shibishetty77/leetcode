class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxone = 0;
        int cur = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1){
                cur++;
                maxone = max(cur, maxone);
             }else {
                cur = 0;
            }
        }
        return maxone;
    }
};