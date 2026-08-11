class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1 || nums.size()==0) return 0;
        vector<int>ans;int gap=-1;
        for(int i=1;i<nums.size();i++){
            gap=abs(nums[i]-nums[i-1]);
            ans.push_back(gap);
        }
        return *max_element(ans.begin(),ans.end());
    }
};