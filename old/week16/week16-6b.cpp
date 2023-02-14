///(SLJ-Function-006) ªº∞j®Áº∆≠p∫‚N! :
///ªº∞j®Áº∆≠p∫‚N! ®“. 9 362880 ®“. 0 1 ®“. 5 120

#include <stdio.h>
int func(int n)
{
	if(n==0) return 1;//???
	if(n==1) return 1;
	return n * func(n-1);
}
int main()
{
	int N;
	scanf("%d", &N);

	int ans = func(N);
	printf("%d", ans );
}
