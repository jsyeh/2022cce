///倒過來想
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);
    while( n > 0 ){
        printf("%d\n", n%2);
        n = n / 2;
    }
}

