//(SOIT107_ADVANCE_005) �i���D�G�r����� :
//��J��ӫܤj�������a�P b�A�p�Ga>b�h��X 1�A
//�p�G a<b�h��X -1, �p�G a=b �h��X 0�C
//(�t�ܡG�i�Φr���J�A�Φr�ꪺ�[�I�Ӥ�j�p�C)
#include <stdio.h>
#include <string.h>
int main()
{
	char a[200], b[200];
	scanf("%s %s", &a, &b);

	int N1 = strlen(a);
	int N2 = strlen(b);

	if(N1>N2){
		printf("1");
		return 0;
	}else if(N1<N2){
		printf("-1");
		return 0;
	}
	//if N1 == N2, need to one-by-one
	for(int i=0; i<N1; i++){
		if(a[i]>b[i]){
			printf("1");
			return 0;
		}else if(a[i]<b[i]){
			printf("-1");
			return 0;
		}
	}
	printf("0");
	return 0;
}
