///�T�ƱƧ�
/// a b c �q�p��j��
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
