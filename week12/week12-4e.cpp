//(SOIT106_ADVANCE_005_C) �i���D�GA��B������
//�D�ئW�١GA��B������
//�D�ؤ��e�G�м��g�@�Ө��MYPOWER(A,B)�A�i�H�p��A^B���G�C
//�Ʀr�d��G��� 1 �V 9�C
//�{������G���o�ϥ�power()��ơC���o�ܧ�w���w���D�{���C

#include <stdio.h>

int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=0; i<b; i++){
		ans = ans * a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
