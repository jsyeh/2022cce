//(SOIT107_Base_010) 基礎題：平年月份的天數 :
//輸入一個整數N，輸出平年中N月的天數。

#include <stdio.h>
int main()
{
	//a[0] nothing
	//a[1] January
	//a[12] December
	int a[13]={0, 31,28,31,30,31,30,31, 31,30,31,30,31};
	int n;
	scanf("%d", &n);
	printf("%d", a[n]);
}
