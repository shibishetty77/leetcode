int maximumCount(int* nums, int numsSize) {
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3=0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            cnt1++;
            }else 
            if(nums[i]<0){
                cnt2++;
            }else{
                 cnt3++;
            }
        }
        if(cnt1>=cnt2){
            return cnt1;
        }else{
            return cnt2;
        }
 return -1;
}