//(SOIT107_ADVANCE_008_C_C++) 秈顶肈ㄧ计耞借计 :
//砞璸ㄧ计prime(n)耞n琌借计
//狦琌借计玥肚1玥肚0
#include <iostream>
using namespace std;
int prime(int n)
{
	int bad=0;
	for(int i=2; i<n; i++){
		if(n%i==0) bad=1;
	}

	if(bad==0) return 1;
	else return 0;
}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* よ C++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
