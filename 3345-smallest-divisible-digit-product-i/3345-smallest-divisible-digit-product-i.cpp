class Solution {
public:
    int getnxt(int n){
        int prod=1;
        while(n!=0){
            int digit=n%10;
            prod=digit*prod;
            n=n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int prod=getnxt(n);
        while(prod%t!=0){
            n++;
            prod=getnxt(n);
        }
        return n;
    }
};