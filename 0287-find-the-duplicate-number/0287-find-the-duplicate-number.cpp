class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        for(int j=1;j<=nums.size()-1;j++){
            if(nums[i]==nums[j]){
                return nums[i];
            }
            i++;
        }
        return {};
    }
};