///�˹L�ӷQ
#include <stdio.h>
int main()
{
    ///�п�J9���
    int n;
    scanf("%d", &n);
    while( n > 0 ){
        printf("%d\n", n%2);
        n = n / 2;
    }
}

