class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>seen;
        for(int num:nums){
            seen[num]++;
        }
        for(auto num:seen){
            if(num.second==1) return num.first;
        }
        return -1;
    }
};