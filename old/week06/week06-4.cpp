#include <stdio.h>
int main()
{
    int a, b, c; ///老大, 老二, 老三
    scanf("%d %d", &a, &b);
    while(1){///1直做事
        c = a%b;///老三
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if( c==0 ) break; ///得到0就離開

        a=b; ///老二變老大
        b=c; ///老三變老二
    }
    printf("答案b: %d ", b);///答案出來了
}
