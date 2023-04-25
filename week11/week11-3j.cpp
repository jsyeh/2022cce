#include <stdio.h>
int main()
{
	int ans=0, n;
	for(int i=0; i<10; i++){
		scanf("%d", &n);
		if(n%3==0) ans++;
	}
	printf("%d\n", ans);
}
