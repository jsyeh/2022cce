///scanf() ���S�O�� return ��

#include <stdio.h>
int main()
{
    int a, b;
    int ans = scanf("%d%d", &a, &b);

    printf("scanf()�| return ���ȬO:%d\n", ans);
}
