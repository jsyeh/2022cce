/// (SOIT107_ADVANCE_003) 進階題：
///計算一列整數的總和 :
///請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。

#include <stdio.h>
int main()
{
	int ans = 0;
	while(1){
		printf("Enter an integer ( 999 to end ): \n");
		int temp;
		scanf("%d", &temp);
		if(temp==999) break;

		ans += temp;
	}

	printf("The total is: ");
	printf("%d", ans);
}
