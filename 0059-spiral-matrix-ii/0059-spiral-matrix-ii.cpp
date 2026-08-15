class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int num=1;
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        while(left<=right && top<=bottom){
            if(left<=right && top<=bottom){
                for(int i=left;i<=right;i++){
                    ans[top][i]=num;
                    num++;
                }
            }top++;
            if(left<right && top<=bottom){
                for(int j=top;j<=bottom;j++){
                    ans[j][right]=num;
                    num++;
                }
            } right--;
            if(left<=right && top<=bottom){
                for(int l=right;l>=left;l--){
                    ans[bottom][l]=num;
                    num++;
                }
            }bottom--;
            if(left<=right && top<=bottom){
                for(int k=bottom;k>=top;k--){
                    ans[k][left]=num;
                    num++;
                }left++;
            }
        }
        return ans;
    }
};