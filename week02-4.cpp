///準備好整數 a, b
///讀入 a, b
///印出 a+b
#include <stdio.h> ///OK

int main() ///OK
{
    int a, b; ///剛剛課本有看到 OK
    printf( "請用鍵盤輸入2個整數: " ); ///廢話
    scanf( "%d", &a );
    scanf( "%d", &b );
    printf( "你讀入了 %d %d \n", a, b );
    printf( "它們加起來是: %d \n", a+b ); ///也 OK
}

