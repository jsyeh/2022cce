///(SOIT107_ADVANCE_004) 秈顶肈程そ计gcd :
//块俱计 a b块a b程そ计

#include <stdio.h>
int gcd(int a, int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b, a%b);
}

int main()
{
	printf("Enter two integers: \n");
	int a, b;
	scanf("%d%d", &a, &b);


printf("The greatest common divisor of %d and %d is ", a, b);
	int ans = gcd(a,b);
	printf("%d\n", ans);
}
