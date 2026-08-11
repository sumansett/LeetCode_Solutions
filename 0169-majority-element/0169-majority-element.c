int majorityElement(int* nums, int numsSize) {
    
    int candidate=0,count=0,i;

    for (i=0;i<numsSize;i++)
    {
        if(count==0)
        {
            candidate=nums[i];
        }
        if( candidate==nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}