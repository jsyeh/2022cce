///把上週的 week03-5.cpp 剪貼下來, 我們要練習排版 CodeBlocks 右鍵, Format AStyle
///很有多種排版法, 今天week04-2都試試看
///Setting-Editor, 左邊第7個 Source Formatter
/// Allmen (ANSI) 預設的排版法, 大括號在下面,清楚
/// K&R (C的發明者,寫的書,Hello World出處) 大括號在右邊, 省下很多行
/// Stroustrup 是 C++ 的爸爸 (發明者)
/// Linux 的, 空格是8格
///week03-5.cpp 想要把 week03-2的數學,自動算
#include <stdio.h>
int main()
{
    ///  K&R The C Programming Lanaguage 的作者(Hello World出處)
    for( int n=1; n<2000; n++ ) ;


    {
        if( n%8==6 && n%9==7 && n%15==13) {

            printf("\n現在n: %d\n", n );
            printf("用8除餘%d\n", n%8 );
            printf("用9除餘%d\n", n%9 );
            printf("用15除餘%d\n", n%15 );
        }

        if( n==0 )
            printf("hello");
    }
}
