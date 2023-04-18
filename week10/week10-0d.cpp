#include <stdio.h>
#include <algorithm> //std::sort()
//Method 4: std::sort()
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	std::sort(a, a+100);

	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}

}
