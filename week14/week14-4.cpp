///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///暴力法
#include <stdio.h>
int main()
{
    int ans;
    for(int i=1; i<=68; i++){
        if( 51%i==0 && 68%i==0 ){
            ans = i;
        }
    }
    printf("ans:%d\n", ans);
}
