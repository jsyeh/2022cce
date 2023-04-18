#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	//Method 1: Bubble Sort
	for(int k=0; k<100-1; k++){
		for(int i=0; i<100-1; i++){
			if(a[i]>a[i+1]){
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}

	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}
}
