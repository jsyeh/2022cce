///(SOIT107_ADVANCE_004) �i���D�G�̤j���]��gcd :
//��J�G��� a b�A��Xa b�̤j���]��

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
