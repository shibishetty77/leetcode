class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>count;
        for(int num:nums){
           count.insert(num);
        }
        int ans=0;
        for(int num:count){
            if(count.find(num - 1) == count.end()) {
            int length=1;
            while(count.find(num+1)!=count.end())  {
                    num++;
                    length++;
            }
            ans=max(ans,length);
            }
    }
    return ans;
    }
};