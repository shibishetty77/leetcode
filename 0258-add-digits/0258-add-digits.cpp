class Solution {
public:
    int getnext(int num){
        int sum=0;
        while(num>0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>=10){
            num=getnext(num);
        }
        return num;
    }
};