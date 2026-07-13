/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int i,j,twoSum=0;
    *returnSize=2;
    int* twonumsindex =(int*)malloc(2*sizeof(int));
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            twoSum=nums[i]+nums[j];

            if(target==twoSum)
            {
                
                twonumsindex[0]=i;
                twonumsindex[1]=j;

                return twonumsindex;

            }
        }
    }
    return NULL;
}