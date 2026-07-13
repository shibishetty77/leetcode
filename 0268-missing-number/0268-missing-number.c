int missingNumber(int* nums, int numsSize) {
    int sum=(numsSize*(numsSize+1))/2;
    int asum=0;
    for(int i=0;i<numsSize;i++){
        asum=nums[i]+asum;
    }
    return sum-asum;
}