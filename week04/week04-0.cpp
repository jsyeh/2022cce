///scanf() 的特別的 return 值

#include <stdio.h>
int main()
{
    int a, b;
    int ans = scanf("%d%d", &a, &b);

    printf("scanf()會 return 的值是:%d\n", ans);
}
