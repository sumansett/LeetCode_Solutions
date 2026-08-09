int searchInsert(int* nums, int numsSize, int target) {
    int mid,low=0,high=numsSize-1;
    bool flag=false;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            flag=true;
            return mid;
        }

        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else if(nums[mid]>target)
        {
            high=mid-1;
        }
    }

    if(flag==false)
    {
        if(target>nums[mid])
            return mid+1;

        else if(target<nums[mid])
        {
           return mid;
        }
            
    }

    return 0;
}