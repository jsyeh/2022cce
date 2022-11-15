///三數最大值
#include <stdio.h>
int main()
{
    int a=100, b=200, c=300;
    ///scanf("%d %d %d", &a, &b, &c);

    int max=a;
    if(b>max) max = b;
    if(c>max) max = c;

    ///printf("%d %d %d", a, b, c);
    printf("%d", max);
}
