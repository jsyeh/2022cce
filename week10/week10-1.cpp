///Step01-1 C++ std::vector �i�ܤj�p���}�C
#include <stdio.h>
#include <vector> ///step01-1�s�Ǫ�
using namespace std;///step01-1�s�Ǫ�

int main()
{
    ///int a[10];///�T�w�j�p,����W�L
    ///std::vector<int> a; ///�j�p�O�h��,�i�H��
    vector<int> a(10); ///�ŧi ///step01-1�s�Ǫ�

    for(int i=0; i<10; i++){
        a[i] = i*20; ///�A���x���Ϊk
        ///a.push_back(i*20); ///�[�J����
    ///    scanf("%d", &a[i] );
    ///    printf("%d", a[i] );
    }
    a.push_back(88);
    a.push_back(99);

    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i] ); ///�ϥΤ�k�@��
    }
}
