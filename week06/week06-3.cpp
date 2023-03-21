///Week06-3.cpp step03-1
///LeetCode 26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize){
    //今天教: 指標就是陣列、陣列就是指標
    int k=1;
    for(int i=1; i<numsSize; i++) {
        if( nums[i-1]==nums[i] ){
            //不要做事
        } else {
            nums[k] = nums[i];//把新數字搬左邊
            k++;
        }
    }
    return k;
}
///LeetCode 不寫自己的 int main(), 所以想在你的電腦裡跑,要補下面的
#include <stdio.h>
int main()
{
    int a[11] = {0,0,1,1,1,2,2,3,3,4,4};

    int k = removeDuplicates(a, 11);

    for(int i=0; i<k; i++){
        printf("%d ", a[i]);
    }
}
