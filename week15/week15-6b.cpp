#include <stdio.h>
#include <string.h> ///¦r¦êstring¥~±¾

int main()
{
    char line[3000];

    scanf("%s", line);

    int N = strlen( line ); ///¦r¦êstring¥~±¾

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
