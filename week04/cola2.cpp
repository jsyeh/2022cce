#include <stdio.h>
int main()
{
    int N;
    while( scanf("%d", &N)==1 ){
        int ans = N; ///¦@³Ü¤F´X²~
        while(N>=3){
            int got = N/3;
            N = N%3;

            ans += got;
        }

        if(N==2) ans++;
        printf("%d\n", ans);
    }
}
