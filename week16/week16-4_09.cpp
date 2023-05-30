//(SOIT108_Advance_009) 進階題：奇數反流 :
//題目內容：輸入一個整數N，後接N個整數。
//請將這N個數中的奇數，依照出現順序反向印出。
//數字範圍：N與整數的範圍 為 1 – 99。
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);

	int a[100];
	for(int i=0; i<N; i++){
		scanf("%d", &a[i] );
	}


	for(int i=N-1; i>=0; i--){
		if(a[i]%2==1) printf("%d ", a[i] );
	}
}
