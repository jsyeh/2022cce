///�r��i��ܪ�, �i��ܵu, �����D���׬O�h��, ���ΰj��?
///�r��̫᭱,�@�w�O 0 �� �S�s�@ NULL ��, �S�s�@ '\0'
#include <stdio.h>
int main()
{
    char line[3000]; ///�ܤj���r�ꪺ�Ŷ����A�ή@

    printf("�п�J�ܪ��ܪ����r��,���n���Ů�,���� Enter\n");

    scanf("%s", line ); ///�k�䤣�Υ[ & �Ÿ� (�f�Z,���A�O��)
    printf("�����X�Ӧr���O?\n");
    printf("%s\n", line);

    int count=0;
    ///for(int i=0; line[i]!=0; i++){
    for(int i=0;      ; i++){
        if( line[i] == 0) break;
        count++;
    }
    printf("count:%d\n", count);
}
