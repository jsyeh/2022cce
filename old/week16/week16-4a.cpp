///(SLJ-Array-010) Fibonacci 第3i項 :
///輸入n(最大到50), 用一個陣列產生F[0]...F[n],
///輸出F[0],F[3],F[6],... Fibonacci 如下 F[0]=0, F[1]=1, F[n]=F[n-1]+F[n-2]
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
