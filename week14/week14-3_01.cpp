//(SOIT107_Base_001) ��¦�D�G��s�� :
//���]��50���B10���B5���M1����4�صw���A�п�J�@�Ӫ��B
//�A����ܵ��P��Ӫ��B�һݪ��ֵ̤w���զX�C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int n50 = n /50;
	int n10 = n%50 /10;
	int n5 = n%10 /5;
	int n1 = n%5;

	printf("%d=50*%d+10*%d+5*%d+1*%d", n, n50, n10, n5, n1);

}
