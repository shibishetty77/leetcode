class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums[0];
        int l=nums[nums.size()-1];
        return gcdof(s,l);
    }
    int gcdof(int s ,int l){
        while(l!=0){
            swap(s,l);
            l=l%s;
        }
        return s;
    }
};