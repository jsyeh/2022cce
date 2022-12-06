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


# Week08

## step01-0_考試(最大公因數-輾轉相除法)考前複習、考後講解。同學寫得很快,一下子就寫完了。

## step01-1_在實習課有寫到「列出全部質數」的題目。為了講解清楚, 我們今天從「判斷1個質數」開始寫起。使用for迴圈, 去試2...n-1的數(因為1和n本身,一定會整除)。用一個變數 int bad=0 表示迴圈之前沒有壞掉。如果有整除, 就壞掉、不再是質數。迴圈後,看bad的值, 就知道是不是經過嚴格檢查的質數。
```cpp
///質數判別
///不能被 約分 的數字啦
/// 只能被 1 還有 n 本身 可以整除/約分
///暴力法,全部都去試 解決

#include <stdio.h>
int main()
{ ///口訣:倒過來想 (稀有的,比較好想)
    int n;
    scanf("%d", &n);///想試試n是不是質數
    int bad=0;///一開始,還沒有bad壞掉
    for(int i=2; i<n; i++){ ///只能被 1 還有 n 本身 整除
        if( n%i==0 ) bad=1; ///啊!不完美,壞掉
    }
    if(bad==0) printf("%d 是質數" , n );
    else printf("%d 不好, 不是質數", n);///bad
}
```

把註解清掉, 比較清爽的版本

```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int bad=0;
    for(int i=2; i<n; i++){
        if( n%i==0 )  bad=1;
    }
    if(bad==0) printf("Yes");
    else printf("No");
}
```

## step01-2_實習課的題目, 是要判段 2...某個範圍裡, 有幾個質數。所以老師在瘋狂程設裡, 先用一個大迴圈, 印出全部的數,讓你了解2...a 的範圍的迴圈。接下來, 利用 week08-1.cpp 程式碼的核心, 來判斷 n 是不是質數。因此, 此題就會有2個迴圈。

```cpp
//分2次來想
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);

	///(1)先印出 全部的數
	for(int n=2; n<=a; n++){

        ///(2)再判斷n是不是質數
		int bad=0;
		for(int i=2; i<n; i++){
			if( n%i==0 ) bad=1;
		}
		if(bad==0) printf("%d ", n);
	}

}
```

## step02-1_為了增加大家對迴圈的熟悉程度, 老師用加總的範例來講解, 輸入5個數字, 把它們加起來。迴圈前面 int sum=0; 迴圈中間修改 sum += n; 迴圈後面 把 sum 印出來。

```cpp
///請把一些數字加起來
#include <stdio.h>
int main()
{
    printf("請輸入 5個數字(要加起來): ");

    int n;
    int sum=0;///迴圈前面,準備好sum
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        sum += n;///迴圈中間,修改sum
    }
    printf("總合是:%d", sum);///迴圈後面,把sum拿來用
}
```


# Week10

## step01-1_考前復習「列出質數」的程式, 並講解容易出錯的地方

```cpp
//Step01: 大迴圈,試很多個n
//Step02: 小迴圈,測試n是不是質數

#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);//改一下變數, 叫a
	
	for(int n=2; n<=a; n++){//Step01
	
		//測試n是不是質數
		int bad=0;//一開始不知道有沒有壞
		
		for(int i=2; i<n; i++){
			if( n%i==0) bad=1;
		}
		if( bad==0 ) printf("%d ", n);
	}
} 
```

## step01-2_今天要教新的進度-「陣列」,就像之前 int a; 可以宣告一個整數, int a[4] 可以一次準備4個整數。陣列的宣告就是用方括號講有幾格。之前宣告給值是 int a=10; 現在改成 int a[4] = {10, 20, 30, 40}; 來一次把4個值都放進去4個格子。最後, 用電腦的 for迴圈, 把值印出來。

```cpp
#include <stdio.h>
int main()
{
    int a[4] = { 10, 20, 30, 40};
    ///int a[4]; ///沒有給值,就是亂亂的值(之前殘留的)
    for(int i=0; i<4; i++){
        printf("a[%d] = %d \n", i, a[i] );
    }
}
```

## step02-1_剛剛陣列+for迴圈很棒, 但是想要真的理解每一個, 我們使用 a[0] 來取出最前面的那一個整數變數。如果沒有初始化給值, 裡面會先是亂碼。但是 a[0] = 33; 給值後, 之後 a[0] 就會是 33。

```cpp
#include <stdio.h>
int main()
{
    int a[4]; ///宣告有4格 a[0] a[1] a[2] a[3]
    printf("a[0]: %d\n", a[0] ); ///把 a[0]拿來用,亂碼

    a[0] = 33; ///在最前面那個放33
    printf("a[0]: %d\n", a[0] ); ///把 a[0]拿來用
}
```

## step02-2_接下來照著課本, 來熟悉陣列 正著印、倒著印, for迴圈的寫法會反過來。如果對迴圈不熟的話, 這裡很容易出錯。

```cpp
#include <stdio.h> ///倒過來印你的陣列
int main()
{
    int a[4] = { 10, 20, 30, 40 };

    for(int i=0; i<4; i++){
        printf("%d ", a[i] );
    }
    printf("\n上面正的印, 下面倒著印\n");
    for(int i=3; i>=0; i--){
        printf("%d ", a[i] );
    }
}
```

## step03-1_講解百數反印

```cpp
#include <stdio.h>
int main()
{
	int a[100];

	for(int i=0; i<100; i++){ //i: 0...99
		scanf("%d", &a[i] );
	}

	for(int i=99; i>=0; i--){ //i: 99...0
		printf("%d\n", a[i] );
	}

}
```

## step03-2_介紹Git指令

簡單的 Git指令教學

1. 安裝 Git 軟體 (Moodle上課用軟體、桌面 葉正聖老師上課軟體 都有它)
2. 啟動 Git Bash (小黑) 
    - 可用 Linux指令
    - 2.1. ls 列出你的目錄檔案(list)
    - 2.2. cd 改變你的目錄(change directory)
    - 像是 cd desktop 會進到電腦的桌面
    - 也可以用 Windows指令
    - 2.3. start . 開啟現在的目錄(小數點)
    - 也可以用 Git指令
3. git clone https://github.com/你的帳號/2022cce 從雲端複製下來你的硬碟
4. 在檔案總管裡, 把你今天的程式 copy 進去
5. 在 Git Bash 裡, 繼續下指令
    - 5.1. cd 2022cce 進入你的程式倉庫目錄
    - 5.2. git status 可查看你硬碟的狀況(有3個紅色新檔)
    - 5.3. git add . 可以把紅色新檔, 加入倉庫帳冊(靜靜成功了
    - 5.4. git status 再查一次(變成綠色)
6. 在 Git Bash 裡, commit 確認你的修改
    - 要先把你的名字及 email 輸入設定
    - 6.0. git config --global user.email jsyeh@mail.mcu.edu.tw
    - 6.0. git config --global user.name jsyeh
    - 6.1. git commit -m "修改目錄"
7. 推送上雲端
    - 7.1. 先用 Chrome 登入 GitHub
    - 7.2. git push 推送上雲端 (會跳出一個視窗確認你有登入嗎?)


# Week11

## step01-0_考試百數反印, 考前復習、考後示範同學錯誤的地方

## step01-1_三數最大值,想要做三數排序, 先想更簡單的步驟三數最大值。比來比去,程式有點亂。後來發現, 如果用口訣「有個冠軍寶座max」,先讓 int max = a; 之後再看 b 有沒有比max大, 有就取代。再看 c 有沒有比max大, 有就取代


## step02-1_要讓數字從小到大排好, 叫作排序。我們以三數排序做例子, 先比 a b 把大的放右邊, 再比 b c 把大的放右邊, 這時候, 最大的就跑到右邊, 剩下的移到左邊了。最後 a b 再比一次, 便能把 a b c 三個數字從小到大放好。第二個觀念是怎麼移動交換, 我們使用 int temp=a; a=b; b=temp 的方法交換, 有押韻的感覺, 幫助大家記憶, 再用兩個杯子(咖啡、清水)

## step02-2_有100個數字想從小到大排序, 我們使用拍照時攝影師調整位置常用的方法「從左到右巡,相鄰大小不對就交換」的口訣, 巡完一輪後, 最大的在最大邊了。迴圈是 10-1 的原因, 是兩兩比時, 10個人要比9次 (每人a[i]與右邊a[i+1]比)

## step03-1_接續前一個練習, 將「從左到右巡,相鄰大小不對就交換」及「印出陣列」重覆做很多次, 觀察它的結果, 右邊大的數字慢慢累積起來, 太好了。

## step03-2_示範下週考題題目-百數排序,並解釋Bubble Sort泡泡排序法 有機會提早結束

## step03-3_再次利用Git指令,將今天的程式碼上傳到GitHub

使用 Git 指令, 將你的程式推送上GitHub

- 0. 安裝 Git for Windows 工具
- 1. 啟動 Git Bash (小黑)
- 2. cd desktop (小黑:你先到你的桌面)
- 3. start . (小黑:開啟你的資料來)
- 4. git clone 你的網址  (小黑:先把你的程式倉庫 clone 下來)
- 5. 在你的 2022cce 資料夾裡, 放入你的 week11 的程式
- -  cd 2022cce (小黑:要進入你的專案倉庫)
- 7. git status (小黑:查看你的狀態, 紅色)
- 8. git add . (小黑: 把你的修改, 加入)
- 9. git status (小黑:查看你的狀態, 變綠色) 
- (接下來, 要設定你皫 user.email 及 user.name)
- (git config --global user.email jsyeh@mail.mcu.edu.tw)
- (git config --global user.name jsyeh)
- 10. git commit -m "week11" (小黑: 把今天的修改, 確認,並加week11的訊息)
- 11. git push (小黑: 會跳出 Chrome 的 Browser 選確認你的帳號密碼)


# Week12

## step01-1_剛剛考完泡泡排序法Bubble Sort, 今天再練習老師很喜歡的Selection Sort 選擇排序法, 口訣是左手i, 右手j, 左右比大小, 不對就交換。迴圈的寫法相對簡單, 只要考量 for(int j=i+1 的這個地方即可

## step02-1_先請同學們複習int a; int b=10; int c[10]; int d[10]={...};複習完陣列宣告,接下來想讓大家熟悉二維陣列, 所以模仿剛剛的方式, 宣告二維陣列, 並給它初始值。請用 CodeBlocks 實作 week12-2.cpp, 截圖後, 在小畫家裡面畫格子, 熟悉格子的內容 week12-2.png

## step02-2_接下來是二維陣列的使用,口訣是左手i 右手j, 因此迴圈在寫的時候, 左邊迴圈i, 右邊迴圈j。在使用陣列時, 括號裡也是[i][j], 另外自己注意跳行的部分。請利用 CodeBlocks 實作 week12-3.cpp 裡面有利用迴圈來印出陣列的值。截圖,並用小畫家,把 左手i, 右手j 好好畫清楚, 上傳 week12-3.png

## step03-1_先做矩陣加法,了解矩陣的左手i右手j的口訣,用了好多次,加深印象。請使用瘋狂程設-上週實習課的題目(矩陣乘法),但是改寫成矩陣加法的簡化版本, 截圖上傳 week12-4.png (程式則是copy到CodeBlocks存檔成 week12-4.cpp)

## step03-2_最後的大魔王,是矩陣乘法。有了剛剛矩陣加法的程式架構,便可以再修改成矩陣乘法, 重點是 c[i][j] 的值, 是用向量乘法, 也就是 c[i][j]=0 先清空, 再 c[i][j]+= a[i][k]*b[k][j]; 的迴圈k 逐項(相乘)加起來。請用瘋狂程設實作, 完成後截圖上傳 week12-5.png (程式則是copy到CodeBlocks存檔成 week12-5.cpp)

## step03-3_使用 Git 指令, 將你的程式推送上GitHub

- 0. Git 安裝
- 1. 啟動 Git Bash
- 2. 雲端下載
	- 2.1. cd desktop
	- 2.2. git clone https://github.com/jsyeh/2022cce
- 3. 把你桌面的 2022cce 整理放好今天的程式碼
- 4. 在 Git Bash 繼續下指令
	- 4.0. cd 2022cce 
	- 4.1. git status
	- 4.2. git add .
	- 4.3. git status
- 5. commit確認你的修改
	- 5.0. git config --global user.email jsyeh@mail.mcu.edu.tw
	- 5.0. git config --global user.name jsyeh
	- 5.1. git commit -m week12
- 6. push推送上雲端
	- 6.0. Chrome 先登入 GitHub
	- 6.1. git push


# Week13

## step01-0_考試矩陣加法,考前複習、考後簡單講同學出錯的地方,尤其是int a[n][m] 的寫法是不對的

```cpp
#include <stdio.h>
int a[10][10], b[10][10], c[10][10];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m );
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j] );
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &b[i][j] );
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",  c[i][j] );
		}
		printf("\n");
	}
}
```

```cpp
#include <stdio.h>
int a[10][10], b[10][10], c[10][10];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m );
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j] );
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &b[i][j] );
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",  a[i][j] + b[i][j] );
		}
		printf("\n");
	}
}
```

## step01-1_示範左手i右手j的幾個應用,像是選擇排序、最佳買賣點等

```cpp
#include <stdio.h>

int a[5] = {5, 4, 3, 2, 1};

int main()
{ ///可以把所有的比對,全部做過一次!!!!
    for(int i=0; i<5; i++){ ///左手i
        for(int j=i+1, j<5; j++){ ///右手j
            if( a[i] > a[j] ){ ///反過來
                int temp=a[i]; ///就交換
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<5; i++) printf("%d ", a[i] );
}
```

## step02-1_實習課有一題比較有變化的費氏數列, 同學可能看不懂, 為了讓同學了解最基礎的Fibonacci費氏數列,

```cpp
///Fibonacii 費氏數列
#include <stdio.h>
int a[50];

int main()
{
    a[0] = 0;
    a[1] = 1;
    printf("1 "); ///補印一下 a[1] 項

    for(int i=2; i<20; i++){ ///從a[2]開始印
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }

}
```

## step02-1b_實習課的 Fibonacci第3i項,可以利用前面簡單的Fibonacci數列算出來後, 再利用 for迴圈把3i項印出來

```cpp
///Fibonacii 費氏數列
#include <stdio.h>
int a[50];

int main()
{
    a[0] = 0;
    a[1] = 1;
    //printf("1 "); ///補印一下 a[1] 項

    for(int i=2; i<20; i++){ ///從a[2]開始印
        a[i] = a[i-1] + a[i-2];
        //printf("%d ", a[i] );
    }
    
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i+=3){
    	printf("%d ", a[i] );
    }

}
```

## step02-2_接下來教新的進度,課本第5章教函數函式, 什麼是函數、函式呢 其實 int main() 也是個函式,會 return 0; 我們照課本實作 int addnum(int a, int b) 的函式 return a+b 的結果,讓同學熟悉函式的定義、宣告、函式的使用

```cpp
#include <stdio.h>

int addnum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("addnum(2,3)會吐出: %d",  addnum(2,3) );
    return 0;
}
```

## step02-3_課本的函式的圖畫得很棒, 像一個有魔法的神奇箱子,左邊會return吐出來, 上方會傳數值進去箱子。不過有的函式不吐東西出來,就會在函式宣告時, 在左邊寫 void 註明它不會吐東西出來。

```cpp
#include <stdio.h>

void display_num( int a )
{
    printf("你丟給display_num()的參數引數是: %d\n", a );
    return; ///如果是 void 可以不用寫 return
}

int main()
{

    display_num( 100 );
    display_num( 200 );

}
```

## step03-1_函式在使用之前, 需要先 定義 or 宣告它的形狀。

```cpp
#include <stdio.h>
void display_num(int); ///宣告declare

int main()
{
    display_num(5); ///使用、呼叫它
}

void display_num(int a) ///定義 函式的細節
{
    printf("你丟給display_num()的參數引數是: %d\n", a );
    return;
}
```

## step03-2_複習上上週的實習課題目,矩陣順時針旋轉。這個題目要用到第一節課教過的「左手i右手j」的口訣,先畫出直覺簡單but錯誤的結果, 再照著錯誤的結果,去想「output的迴圈要怎麼跑」, 腦海中出現兩個箭頭,思考迴圈從哪裡到哪裡。

```cpp
include <stdio.h>

int a[100][100];

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", & a[i][j] );
		}	
	}
	
	printf("\n");
	for(int j=0; j<m; j++){
		for(int i=n-1; i>=0; i--){
			printf("%2d ", a[i][j] ); 
		}	
		printf("\n");
	}	
}
```

## step03-3_使用 Git 指令, 將你的程式推送上GitHub

- 0. 安裝 Git for Windows
- 1. 開啟 Git Bash 
- 1.1. cd desktop (這個指令可以到桌面)
- 1.2. git clone https://github.com/你的帳號/2022cce
- 1.3. cd 2022cce (這個指令可以到你的倉庫目錄)
- 1.4. start . (這個指令可以把你現在的目錄開起來)
- 2. 修改你的目錄的資料夾,把 week13準備好
- 3. 準備 add 囉 
- 3.1. git status
- 3.2. git add .
- 3.3. git status
- 4. 準備 commit
- 4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
- 4.0. git config --global user.name jsyeh
- 4.1. git commit -m week13
- 5. 推送上雲端
- 5.1. git push
- 5.0. Chrome 要登入GitHub


# Week14

## step01-0_考試「Fibonacci數列」趁機複習陣列、迴圈。考前複習、考後講解。

```cpp
#include <stdio.h>
int a[50];

int main()
{
	a[0]=0;
	a[1]=1;
	for(int i=2; i<=45; i++){
		a[i] = a[i-1] + a[i-2];
	}

	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		printf("%d ", a[i] );
	}
}
```

```cpp
#include <stdio.h>
int a[50];

int main()
{
	int n;
	scanf("%d", &n);
	a[0]=0;
	a[1]=1;
	printf("1 ");
	for(int i=2; i<=n; i++){
		a[i] = a[i-1] + a[i-2];
		printf("%d ", a[i] );
	}
}
```

## step01-1_上週教過函式的宣告declare 定義define 及使用呼叫call, 所以我們就照著課本的範例,重寫一次複習。關於參數的部分, int sum( int a, int b ); 老師請大家去想, 就好像教室是個大盒子, 有2個門可以進來, 在門上包透明塑膠膜, 前門走進來的人, 臉上就會貼著 int a。後門進來的人, 臉上就會貼著 int b。在使用前,要先宣告或定義。

```cpp
///複習: 整數變數的宣告 int a; a是整數的形狀
///複習: 函式的宣告(講它的形狀)
/// int sum( int a, int b ); 宣告它的形狀

#include <stdio.h>
int sum( int a, int b ); ///先宣告 declare

int main()
{///在用之前,要先宣告declare 或 定義define
    int ans = sum(2, 3); ///使用 呼叫
    printf("ans: %d\n", ans);
}
int sum( int a, int b ) ///定義 define, 只能定義一次
{
    return a + b;
}///回傳 回覆人家
```

## step02-1_接下來介紹變數的範圍(variable scope),房間裡的變數(local variable),只能在房間裡看到。外面的變數(global variable)可以被大家看到。用CodeBlocks實作印出一堆中文及數值, 了解外面的變數,可以被大家看到、亂改。

```cpp
///變數的範圍variable scope
/// 房間裡的,只能在房間裡使用
/// 外面的變數, 可以被大家看到
#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("剛進來func()時, z是%d\n", z);
    z = 2;
    printf("在func()裡,把z改成%d\n", z);
}
int main()
{
    int x;
    func();

    printf("在 main()裡, z的值是%d\n", z);
    z = 1;
    printf("在main()裡改 z的值, 現在是%d\n", z);
}
```

## step02-2_房間裡的變數(local) 只能在房間裡面看到。我們在 funcA() 裡有 int a=10; 在 funcB()裡面有 int a=30; 在外面 global變數有 int a=20; 則大家有自己看得到的範圍。

```cpp
///變數的範圍variable scope
/// 房間裡的,只能在房間裡使用
/// 外面的變數, 可以被大家看到
/// 三重劉德華 土城金城武
#include <stdio.h>
int a=20; ///global 全球、全世界都看得到的天王
void funcA()
{///新北市的
    int a=10;///local 天王
    printf("funcA裡面印a:%d\n", a);
}
void funcB()
{///桃園市的
    int a=30;///local 天王
    printf("funcB裡面印a:%d\n", a);
}
int main()
{
    printf("在 main()看到的a是:%d\n", a);
    funcA();
    funcB();
    printf("在 main()看到的a是:%d\n", a);
}
```

## step02-3_利用 python tutor (c tutor) 及 lightbot 讓大家熟悉函式呼叫函式的運作過程

## step03-1_函式呼叫函式的部分, 我們就是用最大公因數-輾轉相除法-函式的版本, 讓大家練習。我們先用 51,68 這兩個數字來練習,使用for迴圈暴力法,看能不能整除、約分。接下來用while迴圈,老大a、老二b、生出老三c, 老三c是0時, b是答案。最後用函式呼叫函式 int gcd(int a, int b) 來解決,程式很清爽。

先用簡單的程式, 了解暴力法
```cpp
///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///暴力法
#include <stdio.h>
int main()
{
    int ans;
    for(int i=1; i<=68; i++){
        if( 51%i==0 && 68%i==0 ){
            ans = i;
        }
    }
    printf("ans:%d\n", ans);
}
```

再改成用變數的版本

```cpp
///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///暴力法
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ){
            ans = i;
        }
    }
    printf("ans:%d\n", ans);
}
```

再改用 輾轉相除法 while 迴圈做做看

```cpp
///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///用輾轉相除法
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    while(1){///迴圈一直做
        c = a%b;///老三
        printf("a:%d b:%d c:%d\n", a,b,c);
        if(c==0) break;

        a = b;
        b = c;
    }
    printf("%d", b);
}
```

最後用輾轉相除法 函式呼叫函式 

```cpp
///最大公因數 為了約分
///ex. 51/68 可以約分嗎?
///用輾轉相除法 函式呼叫函式
#include <stdio.h>
///最大公因數的英文 greatest common divider/divisor?
int gcd(int a, int b)
{    /// 老大  老二
    printf("a:%d b:%d\n", a, b);///這只是印出來,考試不用寫
    if(a==0) return b;
    if(b==0) return a;
            ///老二 老三
    return gcd( b, a%b );
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = gcd(a,b);
    printf("%d\n", ans);
}
```


## step03-1b_利用 c tutor 了解輾轉相除法的函式呼叫函式

## step03-2_下課前,利用Git指令,將程式上傳到GitHub

- 0. 安裝 Git 軟體
- 1. Git Bash (進入桌面,clone複製你雲端,進入你的2022cce目錄, 開你的資料夾)
- 1.1. cd desktop
- 1.2. git clone https://github.com/jsyeh/2022cce
- 1.3. cd 2022cce 
- 1.4. start . 
- 2. 把你的程式, 在檔案總管裡, 放好檔案
- 3. 加入倉庫 (紅色、add、綠色)
- 3.1. git status 
- 3.2. git add .
- 3.3. git status 
- 4. 要 commit 確認你的修改
- 4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
- 4.0. git config --global user.name jsyeh
- 4.1. git commit -m week14
- 5. 推送上雲端
- 5.0. Chrome 登入 GitHub
- 5.1. git push