//(SOIT108_Base_003) ��¦�D�G����ƥ����`�M :
//�D�ؤ��e�G��J�����n�A�i�p��G1*1+2*2+...+n*n
//���`�M�����G�C�Ʀr�d��G���1~1000
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);


	int ans = 0;
	for(int i = 1; i<=n; i++){
		ans += i*i;
	}
	printf("%d", ans);
}
