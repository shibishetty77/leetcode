class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;int max1=-1;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            max1=max(sum,max1);
        }
        return max1;
    }
};