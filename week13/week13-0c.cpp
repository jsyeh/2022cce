//(SOIT106_ADVANCE_006) �i���D�G���W�ƦC�ۥ[ :
// ��J�����n�A�p��1*2+2*3+3*4+�K+(n-1)*n���M�C

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0;
	for(int i=1; i<n; i++){
		ans += i*(i+1);
	}
	printf("%d\n", ans);
}
