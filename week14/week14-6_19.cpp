//(SOIT107_Base_019) 基礎題：三數最小 :
//寫一方法能接受三個正整數，並回傳其最小值

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int ans;
	if(a<=b && a<=c) ans = a;
	if(b<=a && b<=c) ans = b;
	if(c<=a && c<=b) ans = c;

	printf("%d\n", ans);

}
