class Solution {
public:
    int getdigits(int n) {
        int digit;
        int cnt = 0;
        while (n != 0) {
            digit = n % 10;
            cnt++;
            n = n / 10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int ecnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int n = getdigits(nums[i]);
            if (n % 2 == 0)
                ecnt++;
        }
    return ecnt;
}
}
;