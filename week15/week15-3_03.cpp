//(SOIT108_Base_003) 基礎題：正整數平方總和 :
//題目內容：輸入正整數n，可計算：1*1+2*2+...+n*n
//之總和的結果。數字範圍：整數1~1000
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);


	int ans = 0;
	for(int i = 1; i<=n; i++){
		ans += i*i;
	}
	printf("%d", ans);
}
