//(SOIT107_Base_012) ��¦�D�G�r���P�O :
//��J�@�Ӧr���A�Y�䬰�j�g�r���h��XU�A�Y�䬰�p�g�r���h��XL�A�Y�䬰�Ʀr�h��XD�A�Y����L�h��XO�C
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
