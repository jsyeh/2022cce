///��W�g�� week03-5.cpp �ŶK�U��, �ڭ̭n�m�߱ƪ� CodeBlocks �k��, Format AStyle
///�ܦ��h�رƪ��k, ����week04-2���ոլ�
///Setting-Editor, �����7�� Source Formatter
/// Allmen (ANSI) �w�]���ƪ��k, �j�A���b�U��,�M��
/// K&R (C���o����,�g����,Hello World�X�B) �j�A���b�k��, �٤U�ܦh��
/// Stroustrup �O C++ ������ (�o����)
/// Linux ��, �Ů�O8��
///week03-5.cpp �Q�n�� week03-2���ƾ�,�۰ʺ�
#include <stdio.h>
int main()
{
    ///  K&R The C Programming Lanaguage ���@��(Hello World�X�B)
    for( int n=1; n<2000; n++ ) ;


    {
        if( n%8==6 && n%9==7 && n%15==13) {

            printf("\n�{�bn: %d\n", n );
            printf("��8���l%d\n", n%8 );
            printf("��9���l%d\n", n%9 );
            printf("��15���l%d\n", n%15 );
        }

        if( n==0 )
            printf("hello");
    }
}
