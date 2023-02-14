/*
請輸入最小與最大兩值 a 與 b
產生乘法表
例: 輸入 3 6
 3x 3= 9   3x 4=12   3x 5=15   3x 6=18
 4x 3=12   4x 4=16   4x 5=20   4x 6=24
 5x 3=15   5x 4=20   5x 5=25   5x 6=30
 6x 3=18   6x 4=24   6x 5=30   6x 6=36
*/

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=a; i<=b; i++){
		for(int j=a; j<=b; j++){
			printf("%2dx%2d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}

}
