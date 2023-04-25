#include <stdio.h>
int main()
{
	int n, ans;
	scanf("%d", &n);

	if(n<=2000) ans = 100;
	else if( n%500==0 ) ans = 100 + (n-2000)/500 * 5;
	else ans = 100 + (n-2000)/500 * 5 + 5;

	printf("%d\n", ans);
}
