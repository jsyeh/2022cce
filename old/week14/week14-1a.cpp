///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///暴力法
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ){
            ans = i;
        }
    }
    printf("ans:%d\n", ans);
}
