//(SOIT108_Advance_010) �i���D�G���U�I�� :
//�D�ؤ��e�G���@�ӴI�Ϊ��]���W�L�@�U���A
//�ҥH�`�`�d���M���]���쩳���h�֡A�{�b��J�@�Ӿ��N��ܴI�Ϊ��]���`�B�A
//�бz���L�b�]���`�B�W�A�q���C�T��[�@�ӳr���A��K�\Ū�C
//�Ʀr�d��G���N�d�� �� 1000000000000 �V 999000000000000�C
#include <stdio.h>
#include <string.h>
int main()
{
	char line[200];
	scanf("%s", line);
	int N = strlen(line);

	for(int i=0; i<N; i++){
		printf("%c", line[i] );

		if((N-1-i)%3==0 && (N-1-i)!=0 ) printf(",");
	}
}

