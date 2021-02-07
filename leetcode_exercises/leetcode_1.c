//
// Created by john on 1/18/21.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000


void printArray(int *array, int numsSize){
    int i, j;
    for (int i = 0; i < numsSize -1;){
        printf("[%d]%d,", i, array[i]);
        i++;
        j = i;
    }
    printf("%d", array[j]);
    printf("\n");
}

int twoSum(int *nums, int numsSize, int target, int *returnSize){
    int i, j;
    int *ptRt = malloc(sizeof(int)*2);
    printArray(nums, numsSize);
    for (i = 0; i < numsSize-1; i++){
        for (j = i+1; j < numsSize; j++){
            if ((nums[i] + nums[j]) == target){
                printf("%d,%d\n", i, j);
                ptRt[0] = i;
                ptRt[1] = j;
                *returnSize = 2;
                return ptRt;
            }
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int array[] = {8, 10, 25, 2, 3, 12, 7, 9, 1, 5, 11, 15};
    int *ptArray = array;
    int *ptRt;
    int len = sizeof(array) / sizeof(array[0]);
    printf("%d-%d\n", nums[i], nums[j]);
    twoSum(ptArray, len, 9, ptRt);

    /*
     *  int *p = array;
        for (int i = 0; i < 15; i++)
            printf("%d,", *(p+i));
        return 0;
     */
}