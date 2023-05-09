// (SOIT106_ADVANCE_010) 進階題：計算陣列的平方值 :
//輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，
//再列出此算出平方值後的陣列。
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int temp;
		scanf("%d", &temp);

		printf("%d,", temp*temp);
	}

	printf("\n");
}
