//(SOIT108_Base_010) 基礎題：水杯接水 :
//題目內容：有一桶水要分裝到杯子中，
//水桶中的水有N毫升，杯子的容量為M毫升，
//請問至少需要幾個杯子才能承接水桶裡的水。
//現在輸入N與M，請輸出答案。
//數字範圍：N為1 – 9999，M為1 –99
#include <stdio.h>
int main()
{

	int a, b;
	scanf("%d%d", &a, &b);


	int ans = a/b;
	if(a%b>0) ans++;
	printf("%d", ans);
}
