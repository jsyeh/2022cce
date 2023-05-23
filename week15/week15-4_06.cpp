//(SOIT108_Base_006) 基礎題：輸入西元y年，判斷該y年是否為閏年 :
//輸入西元y年，判斷該y年是否為閏年，輸出相對訊息。
//{閏年定義：西元年份除以4可整除，且除以100不可整除，為閏年。
//西元年份除以100可整除，且除以400不可整除，為平年}
#include <iostream>
using namespace std;

int main()
{
	int y; cin>>y;

	if(y%400==0 || (y%100!=0 && y%4==0)){
		cout << y << " is a leap year.\n";
	}else cout << y << " is not a leap year.\n";
}
