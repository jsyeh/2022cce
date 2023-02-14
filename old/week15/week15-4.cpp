#include <stdio.h>
int main()
{
    ///printf("Hello World\n"); ///字串,很多字母,串在一起
    char line[] = "Hello World\n"; ///字串的結尾,有'\0' 其實是0
    ///沒寫數量的陣列,會看右邊有幾個,就會開那麼大

    printf("%c\n", line[0] );
    for(int i=0; i<12; i++){ ///i: 0,1,2,3,4,5 共6個
        printf("=%c=", line[i] );
    }
}///字串可能很長, 可能很短, 不知道長度是多少, 怎麼用迴圈?
