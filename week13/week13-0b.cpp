//(SOIT106_ADVANCE_004) �i���D�G�j�p�g�ഫ :
//Ū�J�@�Ӧr��(�ܦh10�Ӧr��)�A�N�r�ꤤ���j�p�g�^��r���ۤ��ഫ(
//�j�g�ର�p�g�A�p�g�ର�j�g)���X�C
#include <stdio.h>

int main()
{
	char c;
	while( scanf("%c", &c)==1 ){
		if(c>='A' && c<='Z') c = c - 'A' + 'a';
		else if(c>='a' && c<='z') c = c - 'a' + 'A';

		printf("%c", c);
	}
}

//�o�D���H�Υt�@�ؼg�k c += 32 �� c-=32 �]��
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", -'A'+'a'); //�|�L�X32
//    printf("%d\n", -'a'+'A'); //�|�L�X-32
//}

