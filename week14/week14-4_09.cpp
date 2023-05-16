//(SOIT107_Base_009) 基礎題：我們與惡的距離 :
// 輸入一個整數，輸出該整數與2的距離。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = n - 2;
	if(ans<0) ans = 2 - n;

	printf("%d", ans);

}
