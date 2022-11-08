#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        int space=N-i, star = i*2-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
        ///printf("space:%d star:%d\n", N-i, i*2-1);
    }
}
