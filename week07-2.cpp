///�̤j���]��,��� long long int
/// scanf("%lld", &a); Ū�J
///printf("%lld", a); �L�X
#include <stdio.h>
int main()
{
    long long int a, b; ///���O�ܪ������
    scanf("%lld %lld", &a, &b );///�p��,�O�p�g���r��LLD

    long long int ans;
    for( long long int i = 1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("�̤j���]�ƬO:%lld\n", ans);
}
