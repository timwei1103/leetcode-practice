#include<stdio.h>
#include<stdlib.h>
#include <math.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* ptr = (int*)malloc(sizeof(int) * 2);
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ptr[0]=i;
                ptr[1]=j;
                return ptr;
                *returnSize=2;
                break;
            }
        }
    }
    return ptr;
}
