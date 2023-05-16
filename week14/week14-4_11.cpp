//(SOIT107_Base_011) 基礎題：整數二元四則運算 :
//輸入兩個整數 a 與 b 及其 中間的四則運算子 c，輸出其運算結果。
#include <stdio.h>
int main()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);


	int ans=0;
	if(c=='+') ans = a+b;
	if(c=='-') ans = a-b;
	if(c=='*') ans = a*b;
	if(c=='/') ans = a/b;

	printf("%d", ans);

}
