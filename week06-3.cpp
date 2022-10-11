///だ计稱璶だ 51/68
///  刚场计,ぃ俱埃
#include <stdio.h>
int main()
{
    printf("叫块2俱计,璶だ: ");
    int a, b;
    scanf("%d %d", &a, &b); ///51 68

    int ans; ///だ氮 (程そ计)
    for(int i=1; i<=a; i++){ ///1...51 场计
        if( a%i==0 && b%i==0 ){ ///常俱计
            ans = i; ///癘硂计
        }
    }
    printf("ans: %d だ", ans);
    ///р氮ㄓ
}
