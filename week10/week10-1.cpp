#include <stdio.h>
int main()
{
    int a[4] = { 10, 20, 30, 40};
    ///int a[4]; ///�S������,�N�O�öê���(���e�ݯd��)
    for(int i=0; i<4; i++){
        printf("a[%d] = %d \n", i, a[i] );
    }
}
