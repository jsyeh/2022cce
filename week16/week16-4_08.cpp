//(SOIT108_Advance_008) 進階題：10數排序，
//從大到小排好 : 題目內容：輸入10個數字，
//把它們從大到小排好。數字範圍：整數1 – 100。
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i] );
	}

	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if( a[i] < a[j] ){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0; i<10; i++){
		printf("%d ", a[i] );
	}
}
