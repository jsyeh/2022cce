///Fibonacii �O��ƦC
#include <stdio.h>
int a[50];

int main()
{
    a[0] = 0;
    a[1] = 1;
    printf("1 "); ///�ɦL�@�U a[1] ��

    for(int i=2; i<20; i++){ ///�qa[2]�}�l�L
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }

}