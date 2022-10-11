#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){//人類進階型
		//6 vs. 1
		//7 vs. 0
		int space = n-i;
		int star = 2*i-1;
		for(int k=0; k<space; k++) printf(" ");
		for(int k=0; k<star; k++) printf("*");
		printf("\n");
		//printf("i:%d space:%d star:%d\n", 
		//		i,   space,   star);
	}

}