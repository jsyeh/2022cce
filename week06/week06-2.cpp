///Week06-2.cpp �� LeetCode ���{��
///LeetCode ���O�g���㪺�{��, �u�g�@�Ө禡
///�P�_�j��, �n�Ψ쪺�{���ޥ�: �ϥ� for�j��, if�P�_, while�j��
bool isPalindrome(int x){
    int x2 = x; //�ƥ�x��x2
    //�ܪ��ܪ������
    long long int r = 0; //�ϹL�Ӫ��Ʀr, ���U�n��r�̭�
    while( x > 0 ){
        //�ܪ��ܪ������
        r = r*10 + x%10; //���
        x = x / 10;
    }
    //�ϥέ�֪k
    //�̫�x�駹,�ܦ�0...���F x�����
    if(x2 == r) return true;
    else return false;
}
///���O�p�G�O�u���i�H�]���{��, �n�� int main()
#include <stdio.h>
int main()
{
    if( isPalindrome(123454321) ) printf("123454321 Yes\n");
    else printf("123454321 No\n");
    if( isPalindrome(1234567899) ) printf("1234567899 Yes\n");
    else printf("1234567899 No\n");
}
