//(SOIT108_Advance_011) 進階題：秒數換算 :
//題目內容：輸入總秒數(介於0~80000 之間的整數)，
//將其轉換成時:分:秒格式。數字範圍：秒數範圍0~80000

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ss = n%60;
	int mm = n/60%60;
	int hh = n/60/60;

	printf("%02d:%02d:%02d", hh, mm, ss);
}
