///�e�P�P, �f�Z: ����i �k��j
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        ///printf("%d�� ��%d�P\n", i, 2*i-1);
        ///printf("%d�� %d�Ů�\n", i, 5-i );
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}///1��4�Ů� 1�P
///2��3�Ů� 3�P
///3��2�Ů� 5�P
///4��1�Ů� 7�P
///5��0�Ů� 9�P
///          ��2�����Y 2*i-1
