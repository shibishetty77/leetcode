class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;int n=nums.size();
        unordered_map<int,int>count;
        for(int num:nums){
            count[num]++;
        }
        for(auto num:count){
            if(num.second>n/3) ans.push_back(num.first);
        }
        return ans;
    }
};