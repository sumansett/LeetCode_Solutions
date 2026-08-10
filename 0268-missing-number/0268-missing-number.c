int missingNumber(int* nums, int numsSize) {
    
    int i,j,c=0;
    for(i=0;i<=numsSize;i++)
    {   

        for(j=0;j<numsSize;j++)
        {
            if(i==nums[j])
            {
                c++;
            }
            
        }

        if(c==0)
        {
            break;
        }
        else
        {
            c=0;
        }
        
    }
    return i;
}