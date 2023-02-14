///(SLJ-Recursion-004) 遞迴計算 a+(a+1)+(a+2)+...+b :
///輸入 a 與 b, 以遞迴方式計算 a+(a+1)+(a+2)+...+b,
///如果 a>b, 結果為0. 如果 a<=b , 則先遞迴計算出 (a+1)+...+b，最後再加上 a． 例. 3 7 25

#include <stdio.h>
int func(int a, int b)
{
	if(a>b) return 0;
	if(a==b) return b;
	return  a + func(a+1, b);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int ans = func(a, b);
	printf("%d", ans);
}
