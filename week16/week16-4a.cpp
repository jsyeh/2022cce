///(SLJ-Array-010) Fibonacci ��3i�� :
///��Jn(�̤j��50), �Τ@�Ӱ}�C����F[0]...F[n],
///��XF[0],F[3],F[6],... Fibonacci �p�U F[0]=0, F[1]=1, F[n]=F[n-1]+F[n-2]
#include <stdio.h>
int a[50];

int main()
{
	a[0]=0;
	a[1]=1;

	int n;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		a[i] = a[i-1] + a[i-2];
	}

	for(int i=0; i<n; i++){
		if(i%3==0) printf("%d ", a[i] );
	}
}
