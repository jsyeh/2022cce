#include <stdio.h>
int main()
{

    int a[3]={7,8,9};///陣列的宣告,並給初始值
    int b[2][3]={ {4,5,6},{7,8,9}  };
    ///二維陣列宣告,並給初始值
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", b[i][j] );
        } ///陣列的使用,要配合for迴圈
        printf("\n");
    }

}
