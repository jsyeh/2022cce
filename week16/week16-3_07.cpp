//(SOIT107_ADVANCE_007) �i���D�G�Y��έp :
//��J�@�r�ꬰ�Y�몺���G�A�έp1��6�I�X�{�����p�C
#include <stdio.h>
int main()
{
	int a[10] = { };

	char c;
	while( scanf("%c", &c)==1 ){
		a[c-'0']++;
		/*
		if(c=='1') a[1]++;
		if(c=='2') a[2]++;
		if(c=='3') a[3]++;
		if(c=='4') a[4]++;
		if(c=='5') a[5]++;
		if(c=='6') a[6]++;*/
	}

	for(int i=1; i<=6; i++){
		printf("%d:%d\n", i, a[i] );
	}
}
