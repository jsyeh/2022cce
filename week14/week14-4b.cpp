///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///用輾轉相除法
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    while(1){///迴圈一直做
        c = a%b;///老三
        printf("a:%d b:%d c:%d\n", a,b,c);
        if(c==0) break;

        a = b;
        b = c;
    }
    printf("%d", b);
}
