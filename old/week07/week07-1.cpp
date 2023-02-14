///long long int?
///很長 很長 的整數
#include <stdio.h>
int main()
{///在x86的電腦架構下 int 是32位元 可裝 9-10位
    int n=9876543210;
    printf("int 印出來 %d\n", n);///但是印錯了

    ///64位元, 可裝 18-19位數
    long long int a=9876543210;///10位數
    printf("long long int 印出來 %lld\n", a);
}                       ///英文的 long long d
///1999年
///Intel說 IA64 vs. 32 不相容
///AMD說 AMD64 vs 32 要相容
///Intel哭哭,認錯 Intel x64 和 amd64一樣
///所以 C 的 int 在 電腦裡為了與 x86相容
///所以是 32位元
///計概教 0/1 位元,  32位元   2^32 最大是多少? 2,147,483,647
///口訣: 2,000,000,000 後面9個0,合起來10位數, 沒事
///在寫程式時,明明電腦就很強,但為了相容, int 裝笨
///要真的有64位元的功能, 要改用 long long int 很長很長的整數
