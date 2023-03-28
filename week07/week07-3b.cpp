///Week07-3.cpp step02-1 sort排序 sorting
///大一教過 Bubble sort 泡泡排序
/// if判斷, for迴圈, 陣列array
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(a[i]>a[j]){
                int temp = a[i]; ///交換
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ", a[i] );
    }
    printf("\n");
}


