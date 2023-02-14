///三數排序
/// a b c 從小到大排
#include <stdio.h>
int main()
{
    int max;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if( a>b ) max = a;
    else max = b;

    if( c>max) max = c;

    ///printf("%d %d %d", a, b, c);
    printf("%d", max);
}
