//(SOIT106_ADVANCE_004) �i���D�G�j�p�g�ഫ :
//Ū�J�@�Ӧr��(�ܦh10�Ӧr��)�A�N�r�ꤤ���j�p�g�^��r���ۤ��ഫ
//(�j�g�ର�p�g�A�p�g�ର�j�g)���X�C

#include <stdio.h>
int main()
{
	//char line[20];
	//scanf("%s", line);

	//char line[11];
	//scanf("%10s", line);


	char c;
	while( scanf("%c", &c) ==1 ){
		if(c>='a' && c<='z') c = c-'a'+'A';
		else if(c>='A' && c<='Z') c = c-'A'+'a';

		printf("%c", c);
	}


}
