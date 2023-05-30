//(SOIT108_Advance_009B) 膀娄肈 :
//肈ヘず甧块俱计块赣俱计程计
//ㄒ-357程计31578程计1τ0程计0
//计絛瞅俱计 9999 ~ -9999
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n<0) n = -n;

	while(n>10){
		n = n/10;
	}
	printf("%d\n", n);
}
