///(SLJ-Array-002) 均標人數 :
///請輸入任意個分數(最多20個)，最後一個資料以負數結束輸入，
///注意 >100 和 <0 的分數不計算，然後計算並且輸出平均分數，再計算>=平均分數的人數輸出。

#include <stdio.h>
int a[30];

int main()
{
	int N=0;
	float sum=0;
	for(int i=0; i<20; i++){
		scanf("%d", & a[i] );
		if( a[i] > 100 ) continue;
		if( a[i] < 0 ) break;
		sum += a[i];
		N++;
	}

	float average = sum/N;
	printf("%.2f ", average);

	int ans=0;
	for(int i=0; i<20; i++){
		if( a[i] > 100 ) continue;
		if( a[i] < 0 ) break;
		if( a[i] > average) ans++;
	}
	printf("%d", ans);

}
