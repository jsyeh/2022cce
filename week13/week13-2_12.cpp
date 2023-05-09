//(SOIT106_ADVANCE_012) 進階題：陣列找出現次數 :
//讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數列至多包含10個整數)，
//之後再讀入一個正整數，程式可以找出該整數出現在數列中的次數。
#include <stdio.h>
int main()
{
	int N=0;
	int a[20];
	for(int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}

	int ans=0;
	int next;
	scanf("%d", &next);
	for(int i=0; i<N; i++){
		if(a[i]==next) ans++;
	}
	printf("%d\n", ans);
}
