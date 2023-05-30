//(SOIT107_ADVANCE_005) 進階題：字串長度 :
//輸入兩個很大的正整數a與 b，如果a>b則輸出 1，
//如果 a<b則輸出 -1, 如果 a=b 則輸出 0。
//(暗示：可用字串輸入，用字串的觀點來比大小。)
#include <stdio.h>
#include <string.h>
int main()
{
	char a[200], b[200];
	scanf("%s %s", &a, &b);

	int N1 = strlen(a);
	int N2 = strlen(b);

	if(N1>N2){
		printf("1");
		return 0;
	}else if(N1<N2){
		printf("-1");
		return 0;
	}
	//if N1 == N2, need to one-by-one
	for(int i=0; i<N1; i++){
		if(a[i]>b[i]){
			printf("1");
			return 0;
		}else if(a[i]<b[i]){
			printf("-1");
			return 0;
		}
	}
	printf("0");
	return 0;
}
