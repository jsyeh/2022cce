//(SOIT106_ADVANCE_002) 進階題：分式化簡 :
//輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int ans;
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0) ans =i;
	}

	printf("%d %d\n", a/ans, b/ans);
}
