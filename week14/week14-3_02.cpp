//(SOIT107_Base_002) ��¦�D�G�p�{����p�� :
//��J���{���ؼơA��X���I������C�p�{����p��覡��:
//�_��100��(1500����)�A���5��(�C250����)��:����250���ؤ]�n5���C

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0;
	if(n<=1500) ans = 100;
	else {
		ans = 100 + (n-1500)/250*5;
		if(n%250>0) ans += 5; //�i�c,�S�h��1����
	}// n+249
	printf("%d", ans);
}
