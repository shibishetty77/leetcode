class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(m+n);
        int i=0;int j=0;int k=0;
        while( i<m){
            ans[k++]=nums1[i++];
        }
        while(j<n){
            ans[k++]=nums2[j++];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<m+n;i++){
            nums1[i]=ans[i];
        }
    }
};