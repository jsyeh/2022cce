//(SOIT107_Base_011) ��¦�D�G��ƤG���|�h�B�� :
//��J��Ӿ�� a �P b �Ψ� �������|�h�B��l c�A��X��B�⵲�G�C
#include <stdio.h>
int main()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);


	int ans=0;
	if(c=='+') ans = a+b;
	if(c=='-') ans = a-b;
	if(c=='*') ans = a*b;
	if(c=='/') ans = a/b;

	printf("%d", ans);

}
