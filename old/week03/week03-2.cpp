///https://www.facebook.com/groups/676899475660255/posts/6177103125639835/
///某正整數
///用8除餘6
///用9除餘7
///用15除餘13
///該數最小值為多少?
#include <stdio.h>
int main()
{
    printf("請輸入數字n: ");

    int n;
    scanf( "%d" , &n );
    printf("用8除餘%d\n", n%8 );
    printf("用9除餘%d\n", n%9 );
    printf("用15除餘%d\n", n%15 );

}

