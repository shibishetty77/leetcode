double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *result = malloc((nums1Size+nums2Size)*sizeof(int));
    int index = 0;
    int i=0, j=0;
    double res;
    while(i<nums1Size && j<nums2Size)
    {
        if(nums1[i]<nums2[j])
        {
            result[index++] = nums1[i++];
        }
        else
        {
            result[index++] = nums2[j++];
        }
    }
    while(i<nums1Size)
    {
        result[index++] = nums1[i++];
    }
    while(j<nums2Size)
    {
        result[index++] = nums2[j++];
    }
    if(index % 2 == 0)
    {
        index = index/2;
        res = 0;
        res += (double) result[index];
        res += (double) result[index-1];
        res = res/2;
    }
    else
    {
        res = (double) result[index/2];
    }

    return res;
}