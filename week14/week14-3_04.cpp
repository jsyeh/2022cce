//(SOIT107_Base_004) ��¦�D�G����ഫ���� :
//��J�@�Ӿ�Ʀ��A�p�G�ҿ�J����Ƥj��ε���90�A�h��XA;
//�p�G��J����Ƥp��90���j�󵥩�80�A�h��XB;
//�p�G�p��80���j��ε���70�A�h��XC;
//�p�G�p��70���j��ε���60�A�h��XD;
//�p����L��ƫh��XF�C

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n>=90) printf("A");
	else if(n>=80) printf("B");
	else if(n>=70) printf("C");
	else if(n>=60) printf("D");
	else printf("F");

}
