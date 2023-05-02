///SOIT106_ADVANCE_001：進階題：反序數字
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int n2 = n; //backup

	int ans=0;
	while(n>0){
		ans = ans * 10 + n%10;
		n = n / 10;
	}

	printf("%d+%d=%d\n", n2, ans, n2+ans);

}
