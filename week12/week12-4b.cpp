//(SOIT106_ADVANCE_002) �i���D�G������² :
//��J���������l�Τ���(�������i��0)�A�N���²�᪺������X�C

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int ans;
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0) ans =i;
	}

	printf("%d %d\n", a/ans, b/ans);
}
