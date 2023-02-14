///改用輾轉相除法,找最大公因數
///要用 long long int 版本,數字很大
#include <stdio.h>
int main()
{
    long long int a, b, c;///老大,老二, 老三
    scanf("%lld %lld", &a, &b);
    while(1){ ///迴圈一直做
        c = a % b; ///老大、老二,算出老三(餘數)
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n", b );
}
