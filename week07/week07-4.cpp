///解決 人類易解理的正常數字10進位 vs. 2進位
///ex. 先看簡單的版本 1230元=1000元+100元*2+10元*3
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);

    printf("千元的:%d\n", n/1000 ); ///整數 除 整數 得到整數
    n = n%1000;

    printf("百元的:%d\n", n/100 );
    n = n%100;

    printf("十元的:%d\n", n/10 );
    n = n%10;

    printf("一元的:%d\n", n );
}
