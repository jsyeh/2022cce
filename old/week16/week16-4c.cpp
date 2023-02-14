///(SLJ-Array-003) 及格與不及格 : 及格與不及格,
///輸入個數,再輸入分數, 其中<0 與 >100 不計需要重新輸入,
///輸出所有及格與不及格的分數.

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
