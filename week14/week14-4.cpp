///�̤j���]�� ���F����
///ex. 51/68 �i�H������?
///�ɤO�k
#include <stdio.h>
int main()
{
    int ans;
    for(int i=1; i<=68; i++){
        if( 51%i==0 && 68%i==0 ){
            ans = i;
        }
    }
    printf("ans:%d\n", ans);
}
