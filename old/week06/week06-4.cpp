#include <stdio.h>
int main()
{
    int a, b, c; ///�Ѥj, �ѤG, �ѤT
    scanf("%d %d", &a, &b);
    while(1){///1������
        c = a%b;///�ѤT
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
        if( c==0 ) break; ///�o��0�N���}

        a=b; ///�ѤG�ܦѤj
        b=c; ///�ѤT�ܦѤG
    }
    printf("����b: %d ", b);///���ץX�ӤF
}
