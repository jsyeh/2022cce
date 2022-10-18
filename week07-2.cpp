///程そ计,эノ long long int
/// scanf("%lld", &a); 弄
///printf("%lld", a); 
#include <stdio.h>
int main()
{
    long long int a, b; ///常琌俱计
    scanf("%lld %lld", &a, &b );///み,琌糶ダLLD

    long long int ans;
    for( long long int i = 1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("程そ计琌:%lld\n", ans);
}
