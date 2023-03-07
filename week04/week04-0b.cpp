#include <iostream>
using namespace std;

int main()
{
	long long int a, b;
	while (	cin >> a >> b ){
		long long int ans = b - a;
		if(a>b) ans = a - b;
		cout << ans << endl;
	}
}
