//(SOIT108_Advance_011) �i���D�G��ƴ��� :
//�D�ؤ��e�G��J�`���(����0~80000 ���������)�A
//�N���ഫ����:��:��榡�C�Ʀr�d��G��ƽd��0~80000

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ss = n%60;
	int mm = n/60%60;
	int hh = n/60/60;

	printf("%02d:%02d:%02d", hh, mm, ss);
}
