///Ū��(�^�媺)�D��,���ɭԦ�����
///�ֳt���ޥ�:�u�ݧA�ݱo���� �Ʀr
/// 10 12 => 2
/// 10 14 => 4
/// 100 200 => 100

#include <stdio.h>
int main()
{
    int a, b;

    while( scanf("%d%d", &a, &b)==2 ){
	    int ans = b - a;
    	printf("%d\n", ans);
    }
}
