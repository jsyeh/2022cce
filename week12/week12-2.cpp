#include <stdio.h>
int f[10]; ///�b�~���ŧi���ܼ�,�|���A�⥦��l�ȳ�0
int main()
{
    int a;  //����ܼ�a�ŧi declaration of integer variable a
    int b=10; //����ܼ�b�ŧi&��l��
              //declaration and initialization of integer variable b
    int c[10]; ///�]���A�S��������,�ҥH�|��쥻�ݯd����
    int d[10]={1,2,3,4,5,6,7,8,9,10};

    printf("a:%d\n", a);
    printf("b:%d\n", b);
    for(int i=0; i<10; i++){
        printf("%d ", f[i] );
    }
}
