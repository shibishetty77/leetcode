int countOperations(int num1, int num2) {
    long long s=0;
    while(num1!=0 && num2!=0){
    if(num1>=num2){
        num1=num1-num2;
        s++;
       } else{
            num2=num2-num1;
            s++;
        }
    }
    return s;
}