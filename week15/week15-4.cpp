#include <stdio.h>
int main()
{
    ///printf("Hello World\n"); ///�r��,�ܦh�r��,��b�@�_
    char line[] = "Hello World\n"; ///�r�ꪺ����,��'\0' ���O0
    ///�S�g�ƶq���}�C,�|�ݥk�䦳�X��,�N�|�}����j

    printf("%c\n", line[0] );
    for(int i=0; i<12; i++){ ///i: 0,1,2,3,4,5 �@6��
        printf("=%c=", line[i] );
    }
}///�r��i��ܪ�, �i��ܵu, �����D���׬O�h��, ���ΰj��?
