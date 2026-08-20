class Solution {
public:
    bool divideArray(vector<int>& nums) {
      unordered_map<int,int> count;
      for(int num:nums){
        count[num]++;
      }
      if(nums.size()%2!=0) return false;
      if(nums.size()%2==0){
        for(auto num:count){
            if(num.second%2!=0) return false;
        }
      }
      return true;
    }
};