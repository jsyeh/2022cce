#include <stdio.h>
#include <string.h> ///�r��string�~��

int main()
{
    char line[3000];

    scanf("%s", line);

    int N = strlen( line ); ///�r��string�~��

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
