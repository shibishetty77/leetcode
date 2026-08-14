class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans;
        vector<int> test=nums;
        sort(test.begin(),test.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
         for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return search(ans.begin(),ans.end(),test.begin(),test.end()) !=ans.end();
    }
};