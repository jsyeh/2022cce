# 2022cce

# 2022程式設計 乙班

# Week01
1. What? Why? How? 學什麼? 為什麼學? 如何學?
2. Moodle, 瘋狂程設,  FB/Teams, 實習 (繳交課堂作業33%,課堂考試33%, 實習33%) (圖片,1週交)  (上課鐘響考試/補考)
3. 第一個程式 Hello World (The C Programming Language)
  - 3.1. File-New-Empty File 開新檔案
  - 3.2. File-Save As 另存新檔 week01-1.cpp (你要把 .cpp 打出來)
  - 3.3. 在右邊寫程式
  - 3.4. Build and Run 

## step01-1_介紹上課教什麼What,Why,How

## step01-2_介紹上課評分方式Moodle作業、瘋狂程設考試、實習課成績

## step01-3_利用CodeBlocks寫第一個程式Hello World

```c
#include <stdio.h>

int main()
{
	printf("Hello World\n");
}
```

## step02-1_如何利用PrintScreen或Win-Shift-S組合鍵來截圖上傳Moodle課堂作業

## step02-2_如何上傳Moodle課堂作業

## step02-3_解釋Hello World 程式的意思,並稍加修改

```cpp
#include <stdio.h>

int main()
{
   printf("Hello World\n");
   printf("Hello World\n");
   printf("我是友銓同學\n");
   ///有時候中文會有問題,你可用英文
   //註解 comments 是給人看的 作業2加註解
   ///CodeBlocks如果畫3條,會比較深
}
```

## step03-1_解釋「許功蓋」的中文問題, 之後帶大家建立GitHub帳號、建立GitHub的專案、上傳今天的程式


TODO: 你要上傳截圖(程式、小黑)

4. 如何繳交課堂作業
  - 4.1. 截圖法: Print Screen(F12的右邊PrtScn) or Win-Shift-S
  - 4.2. 要貼到小畫家mspaint, 
  - 4.3. 存檔成 week01-1.png
  - 4.4. 登入 Moodle帳號
5. 課本


1. github.com
2. 註冊Sign up
3. 取名字 英文開頭
4. 改你的大頭貼 (作業3的圖)
------
1. + New Repo(作業4, 要開倉庫)
2. 取名 你的帳號 / 2022cce (倉庫名
3. Add a README file, Create repo 你會有個網址 github.com/你的帳號/2022cce
4. 把你今天寫的2個程式, Add - upload files上傳, 綠色Commit 截圖上傳

## step03-2_如果專案倉庫開錯(ex. 漏勾README.md) 可以刪掉重來即可


# Week02
2022-09-13 Week02
1. 瘋狂程設(下載、註冊、選課)&考試
2. printf() 裡利用 %d 插入數值
3. 宣告整數變數 int a; 
4. 兩數相加

## step01-1_講解線上上課規定、作業常見問題、安裝瘋狂程設
## step02-1_講解CodeBlocks的設定、鍵盤使用的符號、反斜線t是TAB的意思,並進行week02-1

```cpp
///File-New-Empty空白檔案
///File-Save file As 存成 week02-1.cpp
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("H\tello World\n");
    printf("\tHello World\n");
}
```

## step02-2_照著課本,介紹%d在printf()裡可以插入後面的數值

```cpp
#include <stdio.h>
int main()
{
    printf("333\n");
    printf("這裡有字, 有插入值\n");
    printf("這裡有字%d有插入值\n", 333);
}
```

## step03-1_介紹變數、int整數變數、改變值、印出來

```cpp
/// 學習 int 整數 integer
#include <stdio.h>

int main()
{
    int a;
    a = 2;
    printf("現在的a是%d\n", a);
    a = 99;
    printf("現在的a是%d\n", a);
}
```

## step03-2_介紹下週考試「兩數相加」裡面會配合scanf()及&符號取位置

```cpp
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
```

## step03_3_介紹下週考試的簡單版本
考試的版本比較簡單

```cpp
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a+b );
}
```

## step03_4_介紹如何將.cpp程式上傳到GitHub, 配合commit message



# Week03

1. 考試: 兩數相加
2. 主題: 運算 加、減、乘、除、比大小
3. 主題: if(判斷)
4. 主題: for(迴圈)
5. 實務: 用程式解決問題

## step01-0_考試前複習_兩數相加

```cpp
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a+b );
}
```

## step01-0b_考試後講解,把常見的問題逐一示範

1. `#inclide <stdio.h>`
2. `scanf("%d,%d", &a, &b);`
3. `int main`
4. `scanf("%d %d, &a, &b");`

## step01-1_介紹 + - * /
考試兩數相加。會用到 scanf() printf() 變數宣告、加法。所以我們來看課本的第二章(運算, 先了解小學最簡單的 加減乘除 + -   其中整數的除法很奇怪, 整數除整數 會得到整數, 所以除法還有另一個餘數, 使用 % 符號。請利用 CodeBlocks 存檔 week03-1.cpp 練習, 同時小心 printf() 的格式部分 有特殊用法, 要避開它

```cpp
///Week03-1.cpp
///運算: + - * / %
#include <stdio.h>
int main()
{
    int a, b;
    printf("請輸入2個數字: ");
    scanf("%d%d", &a, &b );

    printf(" %d + %d 是 %d\n", a, b, a+b);
    printf(" %d - %d 是 %d\n", a, b, a-b);
    printf(" %d * %d 是 %d\n", a, b, a*b);
    printf(" %d / %d 是 %d\n", a, b, a/b);
    printf(" %d 除法 %d 的餘數是 %d\n", a, b, a%b);
}
```

## step02-1_某正整數，用8除餘6，用9除餘7，用15除餘13，該數最小值為多少

網路上有人問問題 某正整數，用8除餘6，用9除餘7，用15除餘13，該數最小值為多少。有人說答案是358, 請你寫程式 week03-2.cpp 確認這件事

```cpp
///https://www.facebook.com/groups/676899475660255/posts/6177103125639835/
///某正整數
///用8除餘6
///用9除餘7
///用15除餘13
///該數最小值為多少?
#include <stdio.h>
int main()
{
    printf("請輸入數字n: ");

    int n;
    scanf( "%d" , &n );
    printf("用8除餘%d\n", n%8 );
    printf("用9除餘%d\n", n%9 );
    printf("用15除餘%d\n", n%15 );

}
```

## step02-1b_因為有同學打字很慢, 所以老師教幾個有用的按鍵,像是Win-D可快速秀出桌面, Win-方向鍵,可以調視窗的位置大小

## step02-2_運算有加減乘除,也有比大小。所以我們來試試比大小吧。課本第二章有比大小的比較運算(大於、小於、==等於), 第三章有if(判斷),整合起來便可以了

```cpp
///Week03-3.cpp
///要比大小 (第二章、第三章)
#include <stdio.h>
int main()
{
    printf("請輸入數字n: ");

    int n;
    scanf("%d", &n);
    if( n>10 ) printf("n>10");
    if( n<10 ) printf("n<10");
    if( n==10 ) printf("n==10");
}
```

## step02-2b_如何解決 file association 的設定,也就是副檔名要如何對應正確

## step03-1_下週考試題目_奇偶數判斷

```cpp
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if( n%2==0 ) printf("even");
	else printf("odd");
}
```

## step03-2_利用for(迴圈),把今天第2個程式(用8除餘6，用9除餘7，用15除餘13)變成能自動找出數字的版本

```cpp
///week03-5.cpp 想要把 week03-2的數學,自動算
#include <stdio.h>
int main()
{
    for( int n=1; n<2000; n++ ){
        if( n%8==6 && n%9==7 && n%15==13){
            printf("\n現在n: %d\n", n );
            printf("用8除餘%d\n", n%8 );
            printf("用9除餘%d\n", n%9 );
            printf("用15除餘%d\n", n%15 );
        }
    }
}
```

## step03-3_再次示範如何將今天的程式上傳到GitHub

# Week04

## step01-0_考試前複習(奇偶數)

## step01-0b_考試後講解同學出錯的地方

## step01-1_老師花了點時間介紹閏年, 也就是一年365天是不夠的, 4年會多1天 ,要閏年(2月29天), 但根據天文學觀測, 其實地球繞太陽一圈是 365.24219...天, 因此, 閏年有 4, 100, 400 這幾個神奇的數字。老師教了一種簡單記憶的程式寫法, 是先搞定稀有的400, else再考慮100, else 再考慮4, else... 

```cpp
#include <stdio.h>
///閏年 奧運 4年一次
///如果:地球繞太陽公轉一圈365.25天
/// 365 365 365 365+1  2月29天!
///但是 365.24219 所以,太多要再扣回來
///每100年要跳開  每400年要再補回

///口訣: 4 100 400(稀有) 倒過來想
int main()
{
    printf("請輸入西元年分: ");

    int n;
    scanf("%d", &n);

    if( n%400==0 ) printf("閏年");///最稀有
    else if( n%100==0 ) printf("普通年/平年");
    else if( n%4==0 ) printf("閏年");
    else printf("普通年/平年");
}
```

## step02-1_介紹CodeBlocks的自動排版,老師介紹程式碼的排版法, 有預設的 Allmen (ANSI), K&R, Stroustrup 等方法, 請用上週的 week03-5.cpp 程式拿來排版看看(存成 week04-2.cpp), 在 CodeBlocks 裡, 按右鍵可 Format AStyle自動排版, 可在 Setting-Editor-Source Formatter調整看看

```cpp
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
```

## step02-2_講解完台大資訊工程系pangfeng劉邦鋒老師的線上課程YouTube連結, 其中作業2也會用到閏年的判斷, 所以下週考試是簡單版的閏年判斷。請在瘋狂程設-第05週, 練習模式, 修改寫出的程式(印出 Yes 或 No)

```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n%400==0) printf("Yes");
    else if(n%100==0) printf("No");
    else if(n%4==0) printf("Yes");
    else printf("No");
}
```

## step03-1_介紹課本的流程控制 if(判斷) 及 for(迴圈), 接下來練習寫從0開始的迴圈, 觀察它跑幾次

```cpp
///Week04-4
///Step03-1 練習 for(迴圈)
#include <stdio.h>
int main()
{
    for( int i=0; i<4; i++){
        printf("出現 i:%d \n", i);
    } ///會印出 i:0 ... i:3 共4次
}   /// 0 1 2 3 4 5 6 ... 99 (100個)
    /// 0 1 2 (3個)
    /// 0 1 2 3 4 5 (6個)
```

## step03-2_介紹電腦習慣的迴圈(從0開始)與人類習慣的迴圈(從1開始), 並理解它們如何跑一樣多次。

```cpp
///Week04-5
///Step03-2 練習 for(迴圈),看次數
#include <stdio.h>
int main()
{
    int N=7;
    for( int i=0; i<N; i++){
        printf("出現 i:%d \n", i);
    }
    ///程式的重點,是N是多少,就幾次
    for( int i=1; i<=N; i++){
        printf("接下來 i:%d \n", i);
    }
}
```

## step03-3_下課前複習今天上課的內容, 並將程式上傳到GitHub

## step3-4_下課後, 有同學來問為什麼不建議加 system("pause")
用以下的程式來解釋 system() 可以直接呼叫系統的指令, 這不是個好習慣。舉例如下

```cpp
#include <stdlib.h>
#define A system
int main()
{
    A("dir");
    A("del week04-9.cpp");
    A("dir");
}
```

# Week05

## step01-0_考試前講解閏年的2種寫法, 一種簡單, 一種少行但難理解

## step01-0b_考試後講解同學考試出錯的地方

## step01-1_講解 if(判斷) 及 for(迴圈) 的差別

```cpp
///了解 if 和 while 的差別
#include <stdio.h>
int main()
{
    int a=10;
    ///本來是if(判斷) 印一次
    if( a>0 ) printf("a是%d a>0\n", a);

    ///現在改成while(迴圈)
    while( a>0 ) printf("a是%i a>0\n", a);
    ///不會停
}
```

## step01-2_把while(迴圈)修改後, 利用流程圖的方形、菱型、箭頭,來了解程式的流程

```cpp
///while的進階用法,可以跑3次
#include <stdio.h>
int main()
{
    int a=3;
    while( a>0 ){
        printf("a是%d, a>0\n", a);

        a--; ///課本第2章,運算
    }
}
```

## step02-1_利用for(迴圈,把剛剛的while(迴圈)很多行的開頭的值、中間的判斷、收尾的修改, 變成 for(迴圈)的三個欄位

```cpp
///分析 while vs. for
#include <stdio.h>
int main()
{
    ///int a=3;
    ///while( a>0 ){
    ///    printf("a是%d, a>0\n", a);
    ///    a--; ///課本第2章,運算
    ///}
    for( int a=3; a>0; a-- ){
        printf("a是%d, a>0\n", a);
    }
}
```

## step02-2_介紹迴圈的基礎型、進階型、倒過來型
```cpp
///了解 for迴圈的各種變型
#include <stdio.h>
int main()
{
    for( int i=0; i<3; i++ ){ /// 0 1 2
        printf("迴圈(電腦習慣) i是%d\n", i);
    }
    for( int i=1; i<=3; i++){ /// 1 2 3
        printf("迴圈(人類熟悉) i是%d\n", i);
    }
    for( int a=3; a>0; a-- ){
        printf("倒過來的迴圈 a是%d\n", a);
    }
}
```

## step03-1_利用2層迴圈,寫出「九九乘法表」

```cpp
///2層迴圈, 九九乘法表
#include <stdio.h>
int main()
{
    for( int i=1; i<10; i++)
    { ///10次: 0...9
        for(int j=1; j<10; j++)
        {
            printf("%d*%d=%2d ", i, j, i*j );
        }

        printf("\n");
    }
}
```

## step03-2_講解 printf() %2d 的格式意思, 並講解上週作業同學在排版遇到的問題



# Week06
1. 考試: 九九乘法表(小心格式)
2. 主題: 2層迴圈-畫星星
3. 主題: 最大公因數-暴力迴圈法
4. 主題: 最大公因數-輾轉相除法

## step01-0_考前復習、考後講解出錯的地方---九九乘法表

```cpp
#include <stdio.h>
int main()
{
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			printf("%d*%d=%2d ", j, i, i*j);
		}
		printf("\n");
		
	}

}
```
## step01-1_畫星星_利用2層迴圈, 先利用左手i印出鷹架, 想辦法推出要有幾個星星, 再利用右手j迴圈來印出星星

```cpp
///畫星星, 口訣: 左手i 右手j
#include <stdio.h>
int main()
{
    ///for(int i=0; i<5; i++){//基礎型
    ///    printf("i:%d\n", i);
    ///}
    for(int i=5; i>0; i--){///倒過來型
        for(int j=0; j<i; j++){///基礎型
            printf("*");
        }
        ///printf("i:%d星星\n", i);
        printf("\n");
    }
}

```

## step01-2_畫星星, 想要畫出等腰三角形,所以要思考「有幾個空格、有幾個星星」,先利用左手i的鷹架,把樓層印出來,便可以湊答案了
```cpp
///畫星星, 口訣: 左手i 右手j
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        ///printf("%d樓 有%d星\n", i, 2*i-1);
        ///printf("%d樓 %d空格\n", i, 5-i );
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}///1樓4空格 1星
///2樓3空格 3星
///3樓2空格 5星
///4樓1空格 7星
///5樓0空格 9星
///          跟2有關係 2*i-1
```

## step02-1_解釋完畫星星後, 老師想教小學的約分。最直覺的方法, 就是暴力去試,把全部皫數字都試看看能不能整除、能不能約分。

```cpp
///分數想要約分 51/68
///  試全部的數字,看能不能整除
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b); ///51 68

    int ans; ///約分的答案 (最大公因數)
    for(int i=1; i<=a; i++){ ///1...51 全部的數
        if( a%i==0 && b%i==0 ){ ///都整數
            ans = i; ///記下這個數字
        }
    }
    printf("ans: %d 可約分", ans);
    ///把答案印出來
}
```

## step02-2_「輾轉相除法」可以找最大公因數。不過大家國中、高中應該都忘光了。聽說108課綱的國中生也不用學輾轉相除法, 因為有點難理解, 其他國家的國中生也不教這個內容。但是這真的是很巧妙的方法,可以快速約分哦 口訣老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做,就成功了。

```cpp
#include <stdio.h>
int main()
{
    int a, b, c; ///老大, 老二, 老三
    scanf("%d %d", &a, &b);
    while(1){///1直做事
        c = a%b;///老三
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if( c==0 ) break; ///得到0就離開

        a=b; ///老二變老大
        b=c; ///老三變老二
    }
    printf("答案b: %d ", b);///答案出來了
}
```

## step03-1再次講解「輾轉相除法」裡面的 while(1) 的意思, 使用 if(1)為例講解, 其中0不成立,其他都成立。還有講解無窮迴圈 infinite loop 的意思, 並介紹Apple總部的大樓像個Loop迴圈。還有 break 的意思

## step03-2_介紹下週考試題目,畫出大小為N的金字塔
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){//人類進階型
		//6 vs. 1
		//7 vs. 0
		int space = n-i;
		int star = 2*i-1;
		for(int k=0; k<space; k++) printf(" ");
		for(int k=0; k<star; k++) printf("*");
		printf("\n");
		//printf("i:%d space:%d star:%d\n", 
		//		i,   space,   star);
	}

}
```
## step03-3_介紹怎麼利用 Markdown 語法, 像是# 表示大標題, ```cpp 表示程式碼等, 讓大家去修改 GitHub 程式倉庫裡面的 README.md 說明檔


# Week07

## step01-0_考前復習(畫星星、金字塔), 並解釋考前練習的重要性。考後講解出錯的地方.zip

## step01-1_介紹 long long int 很長很長的整數 vs. int 整數 的差別, 並用程式示範太長的數字在int會出錯

```cpp
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
```

## step02-0_解釋為什麼會有 long long int, 為什麼 int 是 32位元, 為什麼 long long int 是 64位元

```cpp
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
```

## step02-1_利用 long long int 來改寫上週的最大公因數-暴力迴圈法

```cpp
///最大公因數,改用 long long int
/// scanf("%lld", &a); 讀入
///printf("%lld", a); 印出
#include <stdio.h>
int main()
{
    long long int a, b; ///都是很長的整數
    scanf("%lld %lld", &a, &b );///小心,是小寫的字母LLD

    long long int ans;
    for( long long int i = 1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("最大公因數是:%lld\n", ans);
}
```

## step02-2_利用 long long int 很長很長的整數的版本,將最大公因數用輾轉相除法算出來。要小心 %lld 不是 %11d

```cpp
///改用輾轉相除法,找最大公因數
///要用 long long int 版本,數字很大
#include <stdio.h>
int main()
{
    long long int a, b, c;///老大,老二, 老三
    scanf("%lld %lld", &a, &b);
    while(1){ ///迴圈一直做
        c = a % b; ///老大、老二,算出老三(餘數)
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n", b );
}
```


## step03-1_利用剝皮法,把數字的每一個位數慢慢剝下來。先用暴力、重覆的程式碼來做。之後可用迴圈來改寫


```cpp
///解決 人類易解理的正常數字10進位 vs. 2進位
///ex. 先看簡單的版本 1230元=1000元+100元*2+10元*3
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);

    printf("千元的:%d\n", n/1000 ); ///整數 除 整數 得到整數
    n = n%1000;

    printf("百元的:%d\n", n/100 );
    n = n%100;

    printf("十元的:%d\n", n/10 );
    n = n%10;

    printf("一元的:%d\n", n );
}
```

```cpp
///倒過來想
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;
}
```

```cpp
///倒過來想
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);
    while( n > 0 ){
        printf("現在的個位數:%d\n", n%10);
        n = n / 10;
    }
}
```

```cpp
///倒過來想
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);
    while( n > 0 ){
        printf("%d\n", n%2);
        n = n / 2;
    }
}
```

## step03-2_利用 GitHub Pages 製作自己的網站, 有自己專屬的網址, 可以上傳圖片, 也能編修你的網站。甚至可以用 HTML CSS JavaScript 編輯你的互動性網站

1. 登入 GitHub 帳號
2. Add repository 加(新的)程式倉庫 
	1. 把倉庫名取成 你的帳號.github.io
	2. 要加你的簡介 (你的網址、網站)
	3. 要勾 Public
	4. 要勾 README
3. 在新的網站的 README.md 裡, 可以放入圖片
	- 只要按右邊的筆,便可以修改 README.md檔
4. 最後 commit

MrSeanIsGod.github.io

