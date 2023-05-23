//(SOIT107_Base_017) 基礎題：剩餘啤酒有幾手又幾瓶 :
//假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？
#include <stdio.h>
int main()
{
	int p, d;
	scanf("%d%d", &p, &d);

	int ans = p - 6*d;

	printf("%d %d", ans/6, ans%6);
}
