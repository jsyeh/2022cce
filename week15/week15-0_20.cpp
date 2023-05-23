//(SOIT107_Base_020) 基礎題：計算立方值 :
//依序輸入六個整數，輸出六個數的立方值。

#include <stdio.h>
int main()
{
	for(int i=0; i<6; i++){
		int n;
		scanf("%d", &n);
		printf("%d\n", n*n*n);
	}

}
