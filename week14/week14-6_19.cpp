//(SOIT107_Base_019) ��¦�D�G�T�Ƴ̤p :
//�g�@��k�౵���T�ӥ���ơA�æ^�Ǩ�̤p��

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int ans;
	if(a<=b && a<=c) ans = a;
	if(b<=a && b<=c) ans = b;
	if(c<=a && c<=b) ans = c;

	printf("%d\n", ans);

}
