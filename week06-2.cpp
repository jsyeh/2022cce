///礶琍琍, 砕: オもi もj
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        ///printf("%d加 Τ%d琍\n", i, 2*i-1);
        ///printf("%d加 %d\n", i, 5-i );
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}///1加4 1琍
///2加3 3琍
///3加2 5琍
///4加1 7琍
///5加0 9琍
///          蛤2Τ闽玒 2*i-1
