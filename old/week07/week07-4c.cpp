///�˹L�ӷQ
#include <stdio.h>
int main()
{
    ///�п�J9���
    int n;
    scanf("%d", &n);
    while( n > 0 ){
        printf("�{�b���Ӧ��:%d\n", n%10);
        n = n / 10;
    }
}

