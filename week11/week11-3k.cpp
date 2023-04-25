#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	if(a>b) printf("1\n");
	if(a==b) printf("0\n");
	if(a<b) printf("-1\n");

}
