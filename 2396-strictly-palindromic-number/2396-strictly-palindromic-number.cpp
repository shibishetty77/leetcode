class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int revno=0;int digit=-1;
        if(n<10){
            return false;
        }
        while(n!=0){
            digit=n%10;
            revno=revno*10+digit;
            n=n/10;
        }
        return n==revno;
    }
};