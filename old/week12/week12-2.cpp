#include <stdio.h>
int f[10]; ///在外面宣告的變數,會幫你把它初始值都0
int main()
{
    int a;  //整數變數a宣告 declaration of integer variable a
    int b=10; //整數變數b宣告&初始值
              //declaration and initialization of integer variable b
    int c[10]; ///因為你沒有給它值,所以會放原本殘留的值
    int d[10]={1,2,3,4,5,6,7,8,9,10};

    printf("a:%d\n", a);
    printf("b:%d\n", b);
    for(int i=0; i<10; i++){
        printf("%d ", f[i] );
    }
}
