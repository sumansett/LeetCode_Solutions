double findMaxAverage(int* nums, int numsSize, int k) {
    int i;
    double maxSum,curSum=0;

    for(int i=0;i<k;i++)
    {
        curSum += nums[i];
    }
    maxSum=curSum;
    for(i=k;i<numsSize;i++)
    {
        curSum= curSum + nums[i] - nums[i-k];
        if(curSum>maxSum)
           maxSum=curSum;
    }

    return maxSum/k;
}