#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=N-1; i>=0;i--){
        int space = i;
        int star = (N-i)*2-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
        ///printf("%d空格 %d星星\n", i, N-i);
    }

}
