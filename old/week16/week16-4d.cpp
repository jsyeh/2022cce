///(SLJ-Array-002) ���ФH�� :
///�п�J���N�Ӥ���(�̦h20��)�A�̫�@�Ӹ�ƥH�t�Ƶ�����J�A
///�`�N >100 �M <0 �����Ƥ��p��A�M��p��åB��X�������ơA�A�p��>=�������ƪ��H�ƿ�X�C

#include <stdio.h>
int a[30];

int main()
{
	int N=0;
	float sum=0;
	for(int i=0; i<20; i++){
		scanf("%d", & a[i] );
		if( a[i] > 100 ) continue;
		if( a[i] < 0 ) break;
		sum += a[i];
		N++;
	}

	float average = sum/N;
	printf("%.2f ", average);

	int ans=0;
	for(int i=0; i<20; i++){
		if( a[i] > 100 ) continue;
		if( a[i] < 0 ) break;
		if( a[i] > average) ans++;
	}
	printf("%d", ans);

}
