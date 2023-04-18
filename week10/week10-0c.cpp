#include <stdio.h>
#include <stdlib.h>
//Method 3: qsort()
int comp(const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	qsort(a, 100, sizeof(int), comp);

	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}

}
