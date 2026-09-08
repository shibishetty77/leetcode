class Solution {
public:
    int countCommas(int n) {
        int com=0;
        if(n<1000) return 0;
        if(n>=1000){
            com+=n-999;
        }
        if(n>=1000000){
            com+=n-999999;
        }
          if(n>=100000000){
            com+=n-9999999;
        }
        
        return com;
    }
};