//(SOIT107_ADVANCE_008_C_C++) �i���D�G��ƧP�_��� :
//�]�p�@�Ө��prime(n)�A�i�H�P�_n�O�_����ơG
//�p�G�O��ƫh�^��1�A�_�h�^��0�C
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
/* �W�� C++ �� main ��� ������ �U�� C �� main ���
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
