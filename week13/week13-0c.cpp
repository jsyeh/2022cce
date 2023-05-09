//(SOIT106_ADVANCE_006) 進階題：漸增數列相加 :
// 輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0;
	for(int i=1; i<n; i++){
		ans += i*(i+1);
	}
	printf("%d\n", ans);
}
