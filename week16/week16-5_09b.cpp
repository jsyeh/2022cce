//(SOIT108_Advance_009B) ��¦�D�G�j��� :
//�D�ؤ��e�G��J�@�Ӿ�ơA��X�Ӿ�ƪ��̤j�쪺�Ʀr�C
//�Ҧp�G-357���̤j��Ʀr��3�B1578���̤j��Ʀr��1�A��0���̤j��Ʀr��0�C
//�Ʀr�d��G��� 9999 ~ -9999
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n<0) n = -n;

	while(n>10){
		n = n/10;
	}
	printf("%d\n", n);
}
