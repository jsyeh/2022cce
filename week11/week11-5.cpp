///��Ӯ�,�q����k��,����N�洫
#include <stdio.h>
int main()
{
    //int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
    int a[10] = {0, 10, 20, 30, 40, 90, 80, 70, 60, 50};

    for(int k=0; k<10; k++){
        int bad=0;///�S���洫�L
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){ ///���k�j�p�����
                int temp=a[i]; ///�N�洫
                a[i]=a[i+1];
                a[i+1]=temp;
                bad=1;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");///�L�Xa[i]
        if(bad==0) break;
    }
}
