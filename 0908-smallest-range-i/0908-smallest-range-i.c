int smallestRangeI(int* nums, int numsSize, int k) {
    int min=nums[0];int max=nums[0];
    for(int i=0;i<=numsSize-1;i++){
        if(min>nums[i]){
            min=nums[i];
        }
        if(max<nums[i]){
            max=nums[i];
        }
    }
    int ans= (max-k)-(min+k);
    if(ans>0){
        return ans;
    }
    else{
        return 0;
    }
}