#include <stdio.h>

int a[5] = {5, 4, 3, 2, 1};

int main()
{ ///�i�H��Ҧ������,�������L�@��!!!!
    for(int i=0; i<5; i++){ ///����i
        for(int j=i+1, j<5; j++){ ///�k��j
            if( a[i] > a[j] ){ ///�ϹL��
                int temp=a[i]; ///�N�洫
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<5; i++) printf("%d ", a[i] );
}
