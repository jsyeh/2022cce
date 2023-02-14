#include <stdio.h> //矩陣乘法 改做 矩陣加法
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){ //先把 a[i][j] 讀進來
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}
	for(int i=0; i<n; i++){ //再把 b[i][j] 讀進來
		for(int j=0; j<n; j++){
			scanf("%d", &b[i][j] );
		}
	}

	for(int i=0; i<n; i++){ //把 c[i][j] 算出來
		for(int j=0; j<n; j++){
			c[i][j] = a[i][j] + b[i][j];//改做加法
		}
	}

	for(int i=0; i<n; i++){ //最後把 c[i][j] 印出來
		for(int j=0; j<n; j++){
			printf("%3d ", c[i][j] );
		}
		printf("\n");
	}
}
