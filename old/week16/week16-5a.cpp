///(SLJ-Recursion-004) ���j�p�� a+(a+1)+(a+2)+...+b :
///��J a �P b, �H���j�覡�p�� a+(a+1)+(a+2)+...+b,
///�p�G a>b, ���G��0. �p�G a<=b , �h�����j�p��X (a+1)+...+b�A�̫�A�[�W a�D ��. 3 7 25

#include <stdio.h>
int func(int a, int b)
{
	if(a>b) return 0;
	if(a==b) return b;
	return  a + func(a+1, b);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int ans = func(a, b);
	printf("%d", ans);
}
