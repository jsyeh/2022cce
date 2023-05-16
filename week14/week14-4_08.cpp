// (SOIT107_Base_008) 基礎題：將一連串整數相乘 :
//請撰寫一個會將一連串整數相乘的程式。
//假定以scanf所讀取的第一個整數，是用於指出接下來要輸入的數值的個數。
//你的程式每執行一次scanf，必須只能讀取一個數值。
//底下是一個輸入列的範例 3 20 50 12 其中3表示後面共有3筆資料要輸入。
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int N;
	scanf("%d", &N);

	int ans = 1;
	for(int i=0; i<N; i++){
		printf("Enter a value: ");
		int temp;
		scanf("%d", &temp);
		ans *= temp;
	}
	printf("Product of the %d values is ", N);
	printf("%d", ans);
}
