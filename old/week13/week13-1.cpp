///Fibonacii 費氏數列
#include <stdio.h>
int a[50];

int main()
{
    a[0] = 0;
    a[1] = 1;
    printf("1 "); ///補印一下 a[1] 項

    for(int i=2; i<20; i++){ ///從a[2]開始印
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }

}
