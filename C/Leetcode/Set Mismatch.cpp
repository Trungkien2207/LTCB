#include <bits/stdc++.h>
using namespace std;
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
     *returnSize = 2;
    int *A=(int*)malloc(sizeof(int)*2);
    int *find=(int*)calloc(numsSize+3,sizeof(int));
    for(int i=0;i<numsSize;i++){
        find[nums[i]]++;
    }
    int thua=0,thieu=0;
    for(int i=0;i<=numsSize;i++){
        if(i!=0 && find[i]==2) thua=i;
         if(i!=0 && find[i]==0) thieu=i; 
    }
    A[0]=thuA;
    A[1]=thieu;
    free(find);
    return A;
}

int main (){


  return 0;
}

