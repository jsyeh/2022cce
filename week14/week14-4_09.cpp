//(SOIT107_Base_009) ��¦�D�G�ڭ̻P�c���Z�� :
// ��J�@�Ӿ�ơA��X�Ӿ�ƻP2���Z���C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = n - 2;
	if(ans<0) ans = 2 - n;

	printf("%d", ans);

}
