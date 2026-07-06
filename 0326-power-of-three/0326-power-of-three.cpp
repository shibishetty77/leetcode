class Solution {
public:
    bool isPowerOfThree(int n) {
        int nnew=n;
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
            if(nnew%3==0){
            nnew=nnew/3;
            return isPowerOfThree(nnew);
            }
        return false;
    }
};