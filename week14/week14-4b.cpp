///�̤j���]�� ���F����
///ex. 51/68 �i�H������?
///������۰��k
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    while(1){///�j��@����
        c = a%b;///�ѤT
        printf("a:%d b:%d c:%d\n", a,b,c);
        if(c==0) break;

        a = b;
        b = c;
    }
    printf("%d", b);
}
