///(1) �e�P�P, �f�Z: ����i, �k��j
#include <stdio.h>
int main()
{   ///�L 5 4 3 2 1 �˹L�Ӫ��j��
/// for(int i=0; i<5; i++){ //(2)�j���¦��
    for(int i=5; i>0; i--){ ///(3) ����i�إX�N�[
        for(int j=0; j<i; j++){///(2)�j���¦��
            printf("*"); ///�v�@�e�P�P
        }
        ///printf("%d�ӬP�P\n", i);///(3)�N�[
        printf("\n"); ///����
    }
}
