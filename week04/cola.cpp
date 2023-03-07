#include <stdio.h>
int main()
{
	int N; ///一開始有幾瓶,也是你手上的瓶數
	while( scanf("%d", &N)==1 ){
		int drinked = N; ///手上有幾瓶,都喝

		while(N>=3){///手上還有3個以上的瓶子的話
            ///就去兌換
            printf("空瓶%d\n", N);

			int got = N/3; ///3瓶換1瓶,got
			N = N%3; ///換完之後殘餘的瓶子
            printf("空瓶%d, 得到%d\n", N, got);

			drinked += got; ///喝新的Cola
			N += got; ///剛剛 got到的喝完,也放到手上

			printf("手上的空瓶:%d 喝了總數:%d\n", N, drinked);
		}

		if(N==2) drinked++; ///要結束時,手上還有2空瓶,可借瓶+1
		printf("%d\n", drinked);
	}
}
