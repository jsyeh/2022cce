//(SOIT107_Base_012) 基礎題：字元判別 :
//輸入一個字元，若其為大寫字母則輸出U，若其為小寫字母則輸出L，若其為數字則輸出D，若為其他則輸出O。
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);

	if(c>='A' && c<='Z') printf("U");
	else if(c>='a' && c<='z') printf("L");
	else if(c>='0' && c<='9') printf("D");
	else printf("O");

}
