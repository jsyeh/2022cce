//SOIT106_ADVANCE_003) �i���D�GŪ�J��ƤϧǦC�L :
//�]�p�@�ӵ{���A�ӵ{���i�H�s��Ū�J�����
//(��J0��ܵ����A�ܦh���W�L10�ӥ����)�A
//����N�ҿ�J������ƥH�ۤϧ���ܦb�e���W�C

#include <stdio.h>

int main()
{
	int a[11];

	int N;
	for(int i=0; i<11; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}


	for(int i=N-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
