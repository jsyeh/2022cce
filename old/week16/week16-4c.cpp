///(SLJ-Array-003) �ή�P���ή� : �ή�P���ή�,
///��J�Ӽ�,�A��J����, �䤤<0 �P >100 ���p�ݭn���s��J,
///��X�Ҧ��ή�P���ή檺����.

#include <stdio.h>
int pass[2000];
int down[2000];
int passN=0, downN=0;

int main()
{
	int n;
	scanf("%d", &n);
	printf("\npass:");
	for(int i=0;     ; i++){
		int now;
		scanf("%d", &now);
		if( now>100) continue;
		if( now<0) continue;


		if( now>=60 ){ //add one pass
			 printf("%4d", now );
		} else { //add one down
			down[downN] = now;
			downN++;
		}
		n--;
		if(n==0) break;
	}
	printf("\ndown:");
	for(int i=0; i<downN; i++) printf("%4d", down[i] );

}
