///讀懂(英文的)題目,有時候有挫折
///快速的技巧:只看你看得懂的 數字
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
