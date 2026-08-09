class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>arr[max]) max=i;
        }
        return max;
    }
};