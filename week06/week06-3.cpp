///Week06-3.cpp step03-1
///LeetCode 26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize){
    //���ѱ�: ���дN�O�}�C�B�}�C�N�O����
    int k=1;
    for(int i=1; i<numsSize; i++) {
        if( nums[i-1]==nums[i] ){
            //���n����
        } else {
            nums[k] = nums[i];//��s�Ʀr�h����
            k++;
        }
    }
    return k;
}
///LeetCode ���g�ۤv�� int main(), �ҥH�Q�b�A���q���̶],�n�ɤU����
#include <stdio.h>
int main()
{
    int a[11] = {0,0,1,1,1,2,2,3,3,4,4};

    int k = removeDuplicates(a, 11);

    for(int i=0; i<k; i++){
        printf("%d ", a[i]);
    }
}
