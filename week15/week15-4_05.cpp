//(SOIT108_Base_005) 膀娄肈块n (n>0) ―nぇ┮Τ计㎝ :
//块n (n>0) ― nぇ┮Τ计㎝
//{ex. 2ぇ计12计㎝计羆1+2=3}
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);


	int ans = 0;
	for(int i=1; i<=N; i++){
		if(N%i==0) ans += i;
	}
	printf("%d", ans);

}
