///Week05-1.cpp step01-1 了解address位址 &a
///變數的4個特質
/// int a = 10;
///型狀 int(1)
///    名字(2)
///       (3)值    (4)&a 住址位址 address
#include <stdio.h>

int main()
{
    int a = 10;
    printf("a:%d 放在%d\n", a, &a);
    int b = 20;
    printf("b:%d 放在%d\n", b, &b);
    int c = 30;
    printf("c:%d 放在%d\n", c, &c);
}
