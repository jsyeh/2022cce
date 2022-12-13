///下週考試題目: 把字串反過來印
/// ABC => CBA   1234567 => 7654321
#include <stdio.h>
int main()
{
    char line[3000];
    printf("請輸入字串: "); ///考試不用寫這行

    scanf("%s", line );

    ///如果知道字串長度, 那迴圈就好寫了
    ///回憶之前的百數反印 for(int i=99; i>=0; i--) printf("%d ", a[i]);
    int N=0;
    for(int i=0;    ; i++){
        if( line[i]==0 ) break;
        N++;
    }///N就會是我們的長度

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
