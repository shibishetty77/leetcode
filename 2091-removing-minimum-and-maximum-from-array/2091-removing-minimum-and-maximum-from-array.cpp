class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int val1=-1;
        int val2=-1;
        int max1=*max_element(nums.begin(),nums.end());
        int min1=*min_element(nums.begin(),nums.end());
        if(nums.size()==1) return 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max1) val1=i;
            if(nums[i]==min1) val2=i;
        }
        int left=min(val1,val2);
        int right=max(val1,val2);
        int f=right+1;
        int b=n-left;
        int both=(left+1)+(n-right);
        return min({f,b,both});
    }
};