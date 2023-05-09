//(SOIT106_ADVANCE_009) 進階題：函數反序排列數字 :
//設計一個函數f(n)，該函數可以傳回整數n的數字反序排列所組成的整數。
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0;
	while(n>0){
		ans = ans * 10 + n%10;

		n = n / 10;
	}
	printf("%d\n", ans);
}
