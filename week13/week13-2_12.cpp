//(SOIT106_ADVANCE_012) �i���D�G�}�C��X�{���� :
//Ū�J�@�ӥ���ƪ��ƦC(�v�@��J����ơA��J0��ܵ����A�ƦC�ܦh�]�t10�Ӿ��)�A
//����AŪ�J�@�ӥ���ơA�{���i�H��X�Ӿ�ƥX�{�b�ƦC�������ơC
#include <stdio.h>
int main()
{
	int N=0;
	int a[20];
	for(int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}

	int ans=0;
	int next;
	scanf("%d", &next);
	for(int i=0; i<N; i++){
		if(a[i]==next) ans++;
	}
	printf("%d\n", ans);
}
