//(SOIT108_Base_006) ��¦�D�G��J�褸y�~�A�P�_��y�~�O�_���|�~ :
//��J�褸y�~�A�P�_��y�~�O�_���|�~�A��X�۹�T���C
//{�|�~�w�q�G�褸�~�����H4�i�㰣�A�B���H100���i�㰣�A���|�~�C
// �褸�~�����H100�i�㰣�A�B���H400���i�㰣�A�����~}
#include <stdio.h>
int main()
{
	int y;
	scanf("%d", &y);


	int leap = 0;
	if(y%400==0) leap = 1;
	else if(y%100==0) leap = 0;
	else if(y%4==0) leap = 1;
	else leap = 0;

	if(leap==1) printf("%d is a leap year.\n", y);
	else printf("%d is not a leap year.\n", y);
}
