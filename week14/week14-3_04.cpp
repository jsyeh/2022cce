//(SOIT107_Base_004) 基礎題：整數轉換等級 :
//輸入一個整數成，如果所輸入的整數大於或等於90，則輸出A;
//如果輸入的整數小於90但大於等於80，則輸出B;
//如果小於80但大於或等於70，則輸出C;
//如果小於70但大於或等於60，則輸出D;
//如為其他整數則輸出F。

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n>=90) printf("A");
	else if(n>=80) printf("B");
	else if(n>=70) printf("C");
	else if(n>=60) printf("D");
	else printf("F");

}
