#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int n50 = n/50;
	int n5 = (n%50)/5;
	int n1 = (n%5)/1;

	printf("%d=50*%d+5*%d+1*%d\n", n, n50, n5, n1);

}
