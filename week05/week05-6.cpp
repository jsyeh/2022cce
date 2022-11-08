///(1) 畫星星, 口訣: 左手i, 右手j
#include <stdio.h>
int main()
{   ///印 5 4 3 2 1 倒過來的迴圈
/// for(int i=0; i<5; i++){ //(2)迴圈基礎型
    for(int i=5; i>0; i--){ ///(3) 左手i建出鷹架
        for(int j=0; j<i; j++){///(2)迴圈基礎型
            printf("*"); ///逐一畫星星
        }
        ///printf("%d個星星\n", i);///(3)鷹架
        printf("\n"); ///跳行
    }
}
