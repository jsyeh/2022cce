///long long int?
///�ܪ� �ܪ� �����
#include <stdio.h>
int main()
{///�bx86���q���[�c�U int �O32�줸 �i�� 9-10��
    int n=9876543210;
    printf("int �L�X�� %d\n", n);///���O�L���F

    ///64�줸, �i�� 18-19���
    long long int a=9876543210;///10���
    printf("long long int �L�X�� %lld\n", a);
}                       ///�^�媺 long long d
///1999�~
///Intel�� IA64 vs. 32 ���ۮe
///AMD�� AMD64 vs 32 �n�ۮe
///Intel����,�{�� Intel x64 �M amd64�@��
///�ҥH C �� int �b �q���̬��F�P x86�ۮe
///�ҥH�O 32�줸
///�p���� 0/1 �줸,  32�줸   2^32 �̤j�O�h��? 2,147,483,647
///�f�Z: 2,000,000,000 �᭱9��0,�X�_��10���, �S��
///�b�g�{����,�����q���N�ܱj,�����F�ۮe, int �˲�
///�n�u����64�줸���\��, �n��� long long int �ܪ��ܪ������
