//(SOIT108_Advance_009) �i���D�G�_�ƤϬy :
//�D�ؤ��e�G��J�@�Ӿ��N�A�ᱵN�Ӿ�ơC
//�бN�oN�ӼƤ����_�ơA�̷ӥX�{���ǤϦV�L�X�C
//�Ʀr�d��GN�P��ƪ��d�� �� 1 �V 99�C
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);

	int a[100];
	for(int i=0; i<N; i++){
		scanf("%d", &a[i] );
	}


	for(int i=N-1; i>=0; i--){
		if(a[i]%2==1) printf("%d ", a[i] );
	}
}
