class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;int i=0;int j=0;
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        sort(ans.begin(),ans.end());
        double res;int mid=ans.size()/2;
        if(ans.size()%2==0) res=(ans[mid]+ans[mid-1])/2.0;
        else res=ans[mid];
        return res;
    }
};