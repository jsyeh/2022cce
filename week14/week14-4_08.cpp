// (SOIT107_Base_008) ��¦�D�G�N�@�s���Ƭۭ� :
//�м��g�@�ӷ|�N�@�s���Ƭۭ����{���C
//���w�Hscanf��Ū�����Ĥ@�Ӿ�ơA�O�Ω���X���U�ӭn��J���ƭȪ��ӼơC
//�A���{���C����@��scanf�A�����u��Ū���@�ӼƭȡC
//���U�O�@�ӿ�J�C���d�� 3 20 50 12 �䤤3��ܫ᭱�@��3����ƭn��J�C
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int N;
	scanf("%d", &N);

	int ans = 1;
	for(int i=0; i<N; i++){
		printf("Enter a value: ");
		int temp;
		scanf("%d", &temp);
		ans *= temp;
	}
	printf("Product of the %d values is ", N);
	printf("%d", ans);
}
