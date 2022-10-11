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

```c
#include <stdio.h>

int main()
{
	printf("Hello World\n");
}
```

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

## step03_3_介紹下週考試的簡單版本

## step03_4_介紹如何將.cpp程式上傳到GitHub, 配合commit message

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
