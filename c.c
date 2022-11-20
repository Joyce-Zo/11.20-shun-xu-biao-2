#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//  移除元素
//  给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，
//并返回移除后数组的新长度。

//int removeElement(int* nums, int numsSize, int val) {
//    int src = 0, dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] != val)
//        {
//            nums[dst] = nums[src];
//            dst++;
//        }
//        src++;
//    }
//    return dst;
//}

// 删除有序数组中的重复项
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，
//并返回移除后数组的新长度
int removeDuplicates(int* nums, int numsSize)
{
    int src = 1;
    int dst = 0;
    while (src < numsSize)
    {
     
        if (nums[src] != nums[dst])
        {
            nums[dst+1] = nums[src];
            dst++;
            src++;
        }
        else
             src++;
    }
    return dst+1;
}
int main()
{
    //int arr[7] = { 1,3,3,4,3,5,6 };
   // int ret = removeElement(arr, 7, 3);
    int arr1[10] = { 0,0,1,1,1,2,2,3,3,4 };
    int arr2[3] = { 1,1,2 };
    int ret1 = removeDuplicates(arr1, 10);
    int ret2 = removeDuplicates(arr2, 3);
    printf("%d ", ret1);
    return 0;
}