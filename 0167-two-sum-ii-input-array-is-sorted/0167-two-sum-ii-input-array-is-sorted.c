/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    int i=0 , j=numbersSize-1;
    int sum=0;
    int *twoindex=NULL;

    while(i<j)
    {
        sum=numbers[i]+numbers[j];

        if(sum>target)
        {
            j--;
        }
        if(sum<target)
        {
            i++;
        }
        if(sum==target)
        {   
            *returnSize = 2;
            twoindex=(int*)malloc(2*sizeof(int));
            twoindex[0]=i+1;
            twoindex[1]=j+1;
            return twoindex;
        }
    }
    return NULL;
}