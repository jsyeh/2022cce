//SOIT106_ADVANCE_003) 進階題：讀入整數反序列印 :
//設計一個程式，該程式可以連續讀入正整數
//(輸入0表示結束，至多不超過10個正整數)，
//之後將所輸入的正整數以相反序顯示在畫面上。

#include <stdio.h>

int main()
{
	int a[11];

	int N;
	for(int i=0; i<11; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}


	for(int i=N-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
