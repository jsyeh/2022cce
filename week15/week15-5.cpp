///字串可能很長, 可能很短, 不知道長度是多少, 怎麼用迴圈?
///字串最後面,一定是 0 值 又叫作 NULL 空, 又叫作 '\0'
#include <stdio.h>
int main()
{
    char line[3000]; ///很大的字串的空間讓你用哦

    printf("請輸入很長很長的字串,不要夾空格,結尾 Enter\n");

    scanf("%s", line ); ///右邊不用加 & 符號 (口訣,幫你記憶)
    printf("它有幾個字母呢?\n");
    printf("%s\n", line);

    int count=0;
    ///for(int i=0; line[i]!=0; i++){
    for(int i=0;      ; i++){
        if( line[i] == 0) break;
        count++;
    }
    printf("count:%d\n", count);
}
