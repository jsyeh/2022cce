//(SOIT108_Base_006) ��¦�D�G��J�褸y�~�A�P�_��y�~�O�_���|�~ :
//��J�褸y�~�A�P�_��y�~�O�_���|�~�A��X�۹�T���C
//{�|�~�w�q�G�褸�~�����H4�i�㰣�A�B���H100���i�㰣�A���|�~�C
//�褸�~�����H100�i�㰣�A�B���H400���i�㰣�A�����~}
#include <iostream>
using namespace std;

int main()
{
	int y; cin>>y;

	if(y%400==0 || (y%100!=0 && y%4==0)){
		cout << y << " is a leap year.\n";
	}else cout << y << " is not a leap year.\n";
}
