# 2022程式設計
資傳一乙 下學期

# Week01

## step01-1_今天是情人節, 我們使用一個公式 (xx+yy-1) 乘3次之後, 再減掉 xxyyy , 如果 0 便是在愛心裡面, 畫小圓, 便能做出愛心。請在 Processing 中實作

```processing
//File-Preference, Font:36
size(400,400); //大小
fill(255,0,0); //Red 填充顏色
noStroke(); //不要畫外框
//ellipse(50,50,100,100); //把實驗的圓刪掉
for(int y=0; y<400; y++){
  for(int x=0; x<400; x++){
    float x2 = (x-200)/100.0; //0...400 => -2..+2
    float y2 = (200-y)/100.0; //0...400 => +2..-2
    float left = x2*x2 + y2*y2 - 1;
    if(left*left*left - x2*x2 * y2*y2*y2 < 0){
      ellipse(x,y,2,2);
    }
  }
}
```

## step02-1_今天的目標,是「最有愛的一天、數一數有幾個2」, 上課慢慢來, 先了解 scanf() 怎麼讀入1個字母、1個整數, 尤其是要小心 & 符號不要忘了。同時了解 #include 怎麼用、 int main() 怎麼寫、變數怎麼宣告。

```cpp
///存檔成 week01-2.cpp 檔名要自己打cpp
#include <stdio.h>
///任務:讀入資料(很多字母), 先從1個字母、1個整數
int main()
{
    printf("請輸入1個字母: ");
    char c; ///字母
    scanf("%c", &c);
    printf("你輸入了 %c \n", c);

    printf("請輸入1個整數: ");
    int a; ///整數
    scanf("%d", &a);
    printf("你輸入了 %d \n", a);
    return 0;
}
```

## step02-2_要讀入字串, 也就是很多個字母, 又叫字元陣列, 使用 scanf() 配合 %s 讀入時, 會以空格來斷開。在這裡, 你會複習字串(也就是字元陣列)的宣告, scanf()配字串怎麼讀(不用加&符號), printf()怎麼印。

```cpp
///任務:讀入資料(很多字母)
#include <stdio.h>
int main()
{
    char c;
    char line[30]; ///陣列, 字母的陣列,叫字串
    ///陣列要多大? 要看題目

    printf("請輸入一個字串,不要太長: ");  ///不要超過29
    scanf("%s", line ); ///讀入整個字串, 沒有 &
    ///會以空格斷字
    printf("你輸入: %s", line);
}
```

## step02-3_接下來,要數一數「字串裡有幾個2的字母」, 要使用 if(判斷), 要使用 for(迴圈), 要使用字串函式 strlen() 得到字串長度, 才能讓迴圈正確運作, 要使用 line[i] 來取到第i個字母, 使用單引號來標示字母 '2'。

```cpp
///任務:讀入資料(很多字母)
#include <stdio.h>
#include <string.h> ///有很多字串的工具,像 strlen() 字串長度
int main()
{
    char c;
    char line[30]; ///陣列, 字母的陣列,叫字串
    ///陣列要多大? 要看題目

    printf("請輸入一個字串,不要太長: ");  ///不要超過29
    scanf("%s", line ); ///讀入整個字串, 沒有 &
    ///會以空格斷字
    printf("你輸入: %s\n", line);

    int N = strlen(line);
    for(int i=0; i<N; i++){
        if( line[i]=='2' ){
            printf("找到2\n");
        }
    }
}
```

## step03-1_前面的 if()配合for()及陣列, 可以找到很多'2', 但下週考試的題目, 是要數一數「總共有幾個2」, 所以利用 迴圈前面 ans=0, 迴圈裡面 ans++, 迴圈後面把 ans 印出來, 來把程式先完成一部分。請在瘋狂程設-練習模式, 第01週的題目(史上最多2的一天), 先完成Input第1行的答案, 執行看到它(部分)成功

```cpp
//week01-5.cpp
//Step03-1 找到 '2' 之後, 要 ans++
#include <stdio.h>
#include <string.h>
int main()
{
	char line[30];

	scanf("%s", line);
	int N = strlen(line);

	int ans=0; //迴圈前面 ans=0
	for(int i=0; i<N; i++){
		if( line[i]=='2' ) ans++;
	} //迴圈中間 ans++
	printf("%d\n", ans);
	//迴圈後面,把ans印出來

}
```

## step03-2_加上 total 及 while迴圈, 完成下週考試題目, 是要再利用 while迴圈,把(不確定行數)的字串讀進來, 利用 scanf()==1 確定如果順利讀入1筆資料,就繼續做。迴圈前面total=0, 迴圈中間total+=ans 迴圈後面把total印出來。

```cpp
///week01-6.cpp
///Step03-2 找到 '2' 之後, 要 ans++
//
#include <stdio.h>
#include <string.h>
int main()
{
	char line[30];
	int total=0;
	while( scanf("%s", line)==1){
		int N = strlen(line);

		int ans=0; //迴圈前面 ans=0
		for(int i=0; i<N; i++){
			if( line[i]=='2' ) ans++;
		} //迴圈中間 ans++
		printf("%d\n", ans);
		//迴圈後面,把ans印出來
		total += ans;
	}
	printf("Total: %d\n", total);
}
```

再換另一種寫法

```cpp
#include <stdio.h>

int main()
{
	char line[30];
	int total=0;
	while(scanf("%s", line)==1){
		int ans=0;
		for(int i=0; line[i]!=0; i++){
			if(line[i]=='2') ans++;
		}
		printf("%d\n", ans);
		total += ans;
	}
	printf("Total: %d\n", total);
}
```
## step03-3 利用 Git 將今天的程式上傳 GitHub
0. 安裝: Git (下一步...)
1. 開啟 Git Bash (小黑) 下載去年的程式
1.1. cd desktop (到桌面的意思)
1.2. git clone https://github.com/你的帳號/2022cce (只能做一次)
1.3. cd 2022cce (到倉庫的目錄裡)
1.4. start . (可在這個目錄,開啟檔案總管)

2. 在檔案總管裡, 整理你的程式 & 去年的程式
2.1. start . (可在這個目錄,開啟檔案總管)
2.2. 把去年的程式, 開個 old 資料夾, 放進去
2.3. 把今天的程式, 開個 week01 資料夾, 放進去

3. 把它加到帳冊!
3.1. git status
3.2. git add .
3.3. git status

4. 要確認、認可這個修改! commit
4.0 git config --global user.name jsyeh
4.0 git config --global user.email jsyeh@mail.mcu.edu.tw
4.1. git commit -m "整理舊程式、加新的week01"

5. 要推送上雲端
5.0. 在 Chrome 先登入 GitHub
5.1. git push
(會再問你,Chrom是不是有登入GitHub)
5.2. 完成後, GitHub 就更新了


另一種作法: GitHub for Desktop



# Week02

## step01-0_考前複習

(YEH014_many_2) 史上最多2的一天 : 
史上最多2的一天 
新聞報導, 本週二是 2022-02-22, 也是農曆正月22日, 如果在 2點22分22秒, 就有更多2了。 

請寫出程式,將數一數, 到底有幾個2, 印出來 

- Input 可能會有很多行, 每一行裡會有許多字母, 但是不會有空格, 方便你用 scanf()讀入字串。
- Output: 每一行 Input 就算出對應的2有幾個, 並印出來。最後一行再要秀出全部的 測資中「總共有幾個2」。 

```cpp
#include <stdio.h>
#include <string.h> //strlen()
int main()
{
	char line[999];
	
	int total = 0;
	while( scanf("%s", line) == 1 ){
		int N = strlen(line);
		int ans=0;
		for(int i=0; i<N;i++){
			if(line[i]=='2') ans++;
		}
		printf("%d\n", ans);
		total += ans;
	}
	printf("Total: %d\n", total);
}
```

另一種寫法
```cpp
#include <stdio.h>

int main()
{
	char line[999];
	
	int total = 0;
	while( scanf("%s",line)==1 ){
		
		int ans = 0;
		for(int i=0; line[i]!=0; i++){
			if(line[i]=='2') ans++;
		}
		printf("%d\n", ans);
		total += ans;
	}
	printf("Total: %d\n", total);
}
```

## step01-1_老師介紹「勇敢的戰士」用 while迴圈,配合 scanf()讀資料, 沒看懂題目,先算答案 瘋狂程設第03週的題目, 練習模式,截圖上傳week02-1.png。 (程式碼請copy到CodeBlocks存檔成 week02-1.cpp)

```cpp
///讀懂(英文的)題目,有時候有挫折
///快速的技巧:只看你看得懂的 數字
/// 10 12 => 2
/// 10 14 => 4
/// 100 200 => 100

#include <stdio.h>
int main()
{
    int a, b;

    while( scanf("%d%d", &a, &b)==2 ){
	    int ans = b - a;
    	printf("%d\n", ans);
    }
}
```


## step02-1_題目沒有那麼簡單,還有2個陷阱。有很多筆資料,就要用 while()配合 scanf()來做它。另外32位元的整數不夠, 要用很長很長的整數, 所以用 long long int 而且配合 scanf()裡面要用 L L D 的小寫 %lld (不是數字11, 是小寫字母ll), 練習模式, 截圖上傳 week02-2.png (程式碼請copy到CodeBlocks存檔成 week02-2.cpp)




```cpp
///Week02-2.cpp step02-1 讀懂(英文的)題目,有時候有挫折
///快速的技巧:只看你看得懂的 數字
// 10 12 => 2
// 10 14 => 4
// 100 200 => 100
/// 400 300 => 100 用 if( ans < 0 ) ans = b - a
#include <stdio.h>
int main()
{///很長很長的整數
    long long int a, b; ///64位元

    while( scanf("%lld%lld", &a, &b)==2 ){
	    long long int ans = a - b;
	    if( ans<0 ) ans = b - a;
    	printf("%lld\n", ans);
    }
}
```

## step02-2_是時候介紹C++的輸入輸出了。C++的輸入是用 std::cin 配合兩個大於>>來送到右邊的變數, 輸出是用 std::cout 配合兩個小於 << 來將右邊的變數值送到左邊的 console output小黑印出來。要記得 #include 它對應的 iostream 即可。一樣在瘋狂程設練習模式執行, 截圖上傳 week02-3.ng (程式碼請copy到CodeBlocks存檔成 week02-3.cpp)



```cpp
///Week02-3.cpp step02-2 改用 C++來寫
#include <iostream> ///#include <stdio.h>

int main()
{///很長很長的整數
    long long int a, b; ///64位元

    while( std::cin >> a >> b ){
	    long long int ans = a - b;
	    if( ans<0 ) ans = b - a;
    	std::cout << ans << std::endl;///printf("%lld\n", ans);
    }
}
```

## step02-3_今天要把 C++ 的 cin 與 cout 教得更精簡。前面的 std::cin 和 std::cout 和 std::endl 要打很多重覆的 std:: 其實它是命名空間 namespace 的意思, 所以可在前寫 using namespace std; 講清楚, 後面就不用再寫了。瘋狂程設 截圖上傳 week02-4.png (程式碼請copy到CodeBlocks存檔成 week02-4.cpp)

```cpp
///Week02-4.cpp step03-1 改用 C++來寫
#include <iostream>///#include <stdio.h>
using namespace std;
int main()
{
    long long int a, b;

    while( cin>>a>>b){
        long long int ans = a - b;
        if( ans < 0 ) ans = b - a;
        cout<<ans<<endl;
    }
}
```


## step03-2_因為今天考試時, 有同學看不懂上週教的 for(int i=0; line[i]!=0; i++) 的字串的迴圈, 所以我們想要了解字串(字元陣列)裡面到底是什麼。先用 C Tutor 印出 char line[] = "ABC" 會看到它佔了 4格, 分別是 'A' 'B' 'C' '\0' 接下來, 我們把 '\0' 印出來, 發現它根本就是 0。請在 CodeBlocks 實作 week02-5.cpp 截圖上傳 week02-5.png

```cpp
///Week02-5.cpp step03-2 了解 '\0' 和 0 的差別
#include <stdio.h>

int main()
{
    printf("%d\n", '\0');
    printf("%d\n",   0 );
    if( '\0' == 0 ) printf("竟然相同\n");
}
```

## step03-3_為了了解陣列、二維陣列, 先用for迴圈來看數字慢慢增加, 觀察它的順序。這個下週再教

```cpp
///Week02-6.cpp step03-3.cpp 下週再講,今天不用寫
#include <stdio.h>

int main()
{
    int n=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}
```

## 今天的最後一個圖 week02-6.png 上傳 GitHub

0. 安裝 Git for Windows (桌面的葉正聖老師資料夾)
1. 開啟 Git Bash 進入到桌面, clone下載 2022cce, 再進入 2022cce
2. 用 start . 可開啟 2022cce 檔案總管, 把今天的程式,放到 week02 裡
3. 用 Git 的 add 加進入 (可用 status 看到紅色、綠色)
4. 用 Git 的 commit 確認、認可你的修正, 要附上 commit message
	- 4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
	- 4.0. git config --global user.name jsyeh
	- 4.1. git commit -m "今天是加入week02"
5. 用 Git 的 push 推送上雲端

# Week03

228紀念日放假

# Week04

## step01-0_考前複習勇敢的戰士,考後介紹同學出錯的地方

```cpp
#include <stdio.h>
int main()
{
	long long int a, b;
	
	while( scanf("%lld%lld", &a, &b) == 2){
		long long int ans = b - a;
		if(a>b) ans = a - b;
		printf("%lld\n", ans);
	}
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
	long long int a, b;
	while (	cin >> a >> b ){
		long long int ans = b - a;
		if(a>b) ans = a - b;
		cout << ans << endl;
	}
}
```

## step01-1_今天的主題是迴文Palindromes, 我們使用瘋狂程設-CPE顆星廣場-最前面的 UVA401 Palindromes題目。在看不懂題目的情況下, 先把 step1 利用 while迴圈配合 scanf()把 Input Output 搞定。在瘋狂程設完成近8成正確的輸出, 

```cpp
///Week04-1.cpp step01-1
///Step1: Input & Output OK (with while-loop)
#include <stdio.h>
int main()
{
	char line[50];

	while( scanf("%s", line)==1 ){
		printf("%s -- ", line);

		//your code here!

		printf("is not a palindrome.\n\n");
	}
}
```

## step02-1_題目需要了解什麼是迴文、什麼是鏡像字。我們先了解什麼是迴文,也就是正讀、反讀,都一樣的字。裡面需要知道字串的長度, 再配合 for迴圈,來將 i 逐項輪過。如果字串長度是N 則是 0...N-1 所以左邊是 i 對應右邊 N-1-i 往左。請在 CodeBlocks 實作 week04-2.cpp 執行 1234321 看收集了幾個 yes, 如果收集齊全,那就是迴文。

```cpp
///Week04-2.cpp step02-1 迴文
///打 1234321 要判斷是不是迴文: 字元陣列+迴圈
#include <stdio.h>
#include <string.h>
int main()
{
    char line[50];
    scanf("%s", line);

    int N = strlen(line);
    int yes=0;
    for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N) printf("全部都yes收齊,是迴文\n");
    else printf("不是全部都yes,就不是迴文\n");
}
```

## step02-2_有了step02-1的迴文判斷,我們把它包裝成函式 testPalindrome(char line[50])會把字串當參數丟進來, 判斷完之後, 收齊N個yes的可以return 1, 不然 return 0; 有了 int p = testPalindrome(line) 及等下要增加的 int m = testMirror(line)函式後, 便能利用 p 和 m 的值排列組合, 有

```cpp
///Week04-3.cpp step02-2
///Step1: Input & Output OK (with while-loop)
///Step2: 判斷迴文
///Step3: 利用函式,來簡化程式的邏輯

#include <stdio.h>
#include <string.h> //step02-2
int testMirror(char line[50]) //用函式來解決問題
{
	return 0;//先假裝都不是鏡向字啦
}
int testPalindrome(char line[50]) //step02-2 用函式來解決問題
{
    int N = strlen(line); //below is step02-1
    int yes=0;
    for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N) return 1; //yes太好了,收齊了 printf("全部都yes收齊,是迴文\n");
    else return 0; //哎,沒收齊 printf("不是全部都yes,就不是迴文\n");
}
int main()
{
	char line[50];

	while( scanf("%s", line)==1 ){
		printf("%s -- ", line);

		int p = testPalindrome(line);//step02-2 用函式來解決問題
		int m = testMirror(line);//step02-2 用函式來解決問題
		if(p==0&&m==0) printf("is not a palindrome.\n\n");
		if(p==1&&m==0) printf("is a regular palindrome.\n\n");
		if(p==0&&m==1) printf("is a mirrored string.\n\n");
		if(p==1&&m==1) printf("is a mirrored palindrome.\n\n");
	}
}
```

## step03-1_接下來是鏡向字的部分。細看題目的描述,有個對照表,把全部的字母及它的鏡像字列出來。我們可以寫個函式 char mirrored_char(char c) 負責做對照的結果,裡面寫了36個if判斷, 非常暴力。在 main()裡面則是用迴圈, c 與 mirrored_char(c) 印出來。

```cpp
///Week04-4.cpp step03-1 做出字母對照表、對照函式
#include <stdio.h>
char mirrored_char(char c)
{
    if(c=='A') return 'A';
    if(c=='B') return ' ';
    if(c=='C') return ' ';
    if(c=='D') return ' ';
    if(c=='E') return '3';
    if(c=='F') return ' ';
    if(c=='G') return ' ';
    if(c=='H') return 'H';
    if(c=='I') return 'I';
    if(c=='J') return 'L';
    if(c=='K') return ' ';
    if(c=='L') return 'J';
    if(c=='M') return 'M';
    if(c=='N') return ' ';
    if(c=='O') return 'O';
    if(c=='P') return ' ';
    if(c=='Q') return ' ';
    if(c=='R') return ' ';
    if(c=='S') return '2';
    if(c=='T') return 'T';
    if(c=='U') return 'U';
    if(c=='V') return 'V';
    if(c=='W') return 'W';
    if(c=='X') return 'X';
    if(c=='Y') return 'Y';
    if(c=='Z') return '5';
    if(c=='1') return '1';
    if(c=='2') return 'S';
    if(c=='3') return 'E';
    if(c=='4') return ' ';
    if(c=='5') return 'Z';
    if(c=='6') return ' ';
    if(c=='7') return ' ';
    if(c=='8') return '8';
    if(c=='9') return ' ';
}
int main()
{
    for(char c = 'A'; c<='Z'; c++){
        printf("%c -- %c\n", c, mirrored_char(c)  );
    }
    for(char c = '1'; c<='9'; c++){
        printf("%c -- %c\n", c, mirrored_char(c)  );
    }
}
```


## step03-2_利用字串、字元陣列, 來把程式簡化成只有1個if() 下週考試可用這個版本, 也可用前一個 36行if的版本

```cpp
//Week04-5.cpp step03-2 利用字串、字元陣列, 來把程式簡化
//成只有1個if() 下週可用這個版本, 也可用前一個 36行if的版本
#include <stdio.h>

char mirrored_char(char c)
{
	char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	for(int i=0; table1[i]!=0; i++){
		if(c==table1[i]) return table2[i];
	}
	return ' ';
}

int main()
{
	char c;
	scanf("%c", &c);
	printf("%c\n",  mirrored_char(c) );
}
```

## step03-3_結合前面的程式, 將 UVA401 的 Palindromes 的程式完成

```cpp
//Week04-6.cpp step03-3
//Step1: Input & Output OK (with while-loop)
#include <stdio.h>
#include <string.h> //step02-2
char mirrored_char(char c)
{
	char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	for(int i=0; table1[i]!=0; i++){
		if(c==table1[i]) return table2[i];
	}
	return ' ';
}

int testMirror(char line[50]) //用函式來解決問題
{
    int N = strlen(line); //below is step02-1
    int yes=0;
    for(int i=0; i<N; i++){
        if( mirrored_char(line[i])==line[N-1-i] ) yes++;
    }
    if(yes==N) return 1; //yes太好了,收齊了 printf("全部都yes收齊,是迴文\n");
    else return 0; //哎,沒收齊 printf("不是全部都yes,就不是迴文\n");
}
int testPalindrome(char line[50]) //step02-2 用函式來解決問題
{
    int N = strlen(line); //below is step02-1
    int yes=0;
    for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N) return 1; //yes太好了,收齊了 printf("全部都yes收齊,是迴文\n");
    else return 0; //哎,沒收齊 printf("不是全部都yes,就不是迴文\n");
}
int main()
{
	char line[50];
	
	while( scanf("%s", line)==1 ){
		printf("%s -- ", line);
		
		int p = testPalindrome(line);//step02-2 用函式來解決問題
		int m = testMirror(line);//step02-2 用函式來解決問題
		if(p==0&&m==0) printf("is not a palindrome.\n\n");
		if(p==1&&m==0) printf("is a regular palindrome.\n\n");
		if(p==0&&m==1) printf("is a mirrored string.\n\n");
		if(p==1&&m==1) printf("is a mirrored palindrome.\n\n");
	}
}
```
## step03-4_利用Git指令上傳GitHub

- 0. 安裝 Git, 開啟 Git Bash
- 1. 進入桌面, git clone 你的 2022cce, 進入 2022cce
- 2. 使用 start . 開啟檔案總管, 把今天的程式整理好
- 3. 使用 git add . 把今天的修改加入帳冊
- 4. 使用 git commit -m "add week04" 的訊息 (之前要先 git config --global 把 user.email 及 user.name 設定好)
- 5. 使用 git push 推送上雲端


# Week05


程式設計二 2023-03-14 Week05
1. 考試：鏡像字
2. 主題：指標
3. 主題：leetcode
4. 主題：全字母句
5. 作業評分Q&A & 實習題目

## step01-0_考試前複習「鏡像字」, 利用兩種不同的寫法做示範, 並在考後講解同學出錯的地方。

```cpp
#include <stdio.h>
int main()
{
	char c, ans;
	scanf("%c", &c);
	if(c=='A') ans = 'A';
	else if(c=='E') ans = '3';
	else if(c=='H') ans = 'H';
	else if(c=='I') ans = 'I';
	else if(c=='J') ans = 'L';
	else if(c=='L') ans = 'J';
	else if(c=='M') ans = 'M';
	else if(c=='O') ans = 'O';
	else if(c=='S') ans = '2';
	else if(c=='T') ans = 'T';
	else if(c=='U') ans = 'U';
	else if(c=='V') ans = 'V';
	else if(c=='W') ans = 'W';
	else if(c=='X') ans = 'X';
	else if(c=='Y') ans = 'Y';
	else if(c=='Z') ans = '5';
	else if(c=='1') ans = '1';
	else if(c=='2') ans = 'S';
	else if(c=='3') ans = 'E';
	else if(c=='5') ans = 'Z';
	else if(c=='8') ans = '8';
	else ans = ' ';
	printf("%c\n", ans);
}
```

或另一種寫法

```cpp
#include <stdio.h>
int main()
{
	char table1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	char table2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	
	char c, ans=' ';
	scanf("%c", &c);
	
	for(int i=0; table1[i]!=0; i++){
		if(c==table1[i]) ans = table2[i];
	}
	printf("%c\n", ans);

}
```

另外有同學寫上週教的另一種寫法

```cpp
#include <stdio.h>
char mirrored_char(char c)
{
	char table1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	char table2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	for(int i=0; table1[i]!=0; i++){
		if(c==table1[i]) return table2[i];
	}
	return ' ';	

}
int main()
{
	char c, ans=' ';
	scanf("%c", &c);
	
	printf("%c\n", mirrored_char(c) );

}
```

## step01-1_今天主題是指標, 首先要了解變數的4個性質(int a = 10; 型狀、名字、值, 位址(最後是放哪裡 &a), 請在 CodeBlocks 實作 week05-1.cpp 跑出變數的值 及它在memory裡的位置address

```cpp
///Week05-1.cpp step01-1 了解address位址 &a
///變數的4個特質
/// int a = 10;
///型狀 int(1)
///    名字(2)
///       (3)值    (4)&a 住址位址 address
#include <stdio.h>

int main()
{
    int a = 10;
    printf("a:%d 放在%d\n", a, &a);
    int b = 20;
    printf("b:%d 放在%d\n", b, &b);
    int c = 30;
    printf("c:%d 放在%d\n", c, &c);
}
```

## step02-1_了解address位置位址之後, 指標變數 裡面專門放address位址, 所以宣變指標變數p, 裡面放 &a 的值, 便能用特異功能, 把 p 指到的地方的值改變。請先在 CodeBlocks 寫完 week05-2.cpp 後, 把程式 copy 到 C Tutor Python 的網站, 試跑這個程式。在網頁裡把程式執行完

```cpp
///Week05-2.cpp step02-2 了解 scanf()
///以前就有認識過 & 符號 scanf("%d", &a);
///會取出變數的位置
///有些用處,像是scanf(),送貨、送炸彈、偷看別人
///要了解指標變數 int *p;  準星
#include <stdio.h>
int main()
{
    int a = 10;
    int * p = &a;

    printf("a: %d address: %d \n", a, &a);
    printf("p: %d point to %d \n", p, *p);

    *p = 20;
    printf("now a is: %d\n", a);
}
```



## step01-0_考試前複習「鏡像字」, 利用兩種不同的寫法做示範, 並在考後講解同學出錯的地方。

在練習之前, 老師有請大家申請 LeetCode 的帳號。不過發現題目有點難, 就下週再練習。

```cpp
///Week05-1.cpp step03-1
/// (1) while (2) for (3) if (4) array
#include <stdio.h>
int main()
{
	int used[26] = { }; ///陣列初始都為0

	char c; ///'A'...'Z' 'a'...'z' ' '
	while( scanf("%c", &c)==1 ){
        int i;///Q:怎麼把字母變成 0..25的值,放到 used[i]
		if(c>='A' && c<='Z'){
			int i = c - 'A';
			used[i]++;
		}else if(c>='a' && c<='z'){
			int i = c - 'a';
			used[i] ++;///這個字母對應的格子++
		}
	}
	int bad=0;
	for(int i=0; i<26; i++){
        if(used[i]==0) bad=1;
	}
	if(bad==0) printf("Yes");
	else printf("No");
}
```


# Week06

## step01-0_考試「全字母字」考前複習、考後講解同學出錯的地方

```cpp
//Week06-0 step01-0 exam
// while  for  if  array

#include <stdio.h>

int used[26];

int main()
{
	char c;
	while( scanf("%c", &c) == 1 ){
		if( c>='A' && c<='Z' )  used[c-'A']++;
		if( c>='a' && c<='z' )  used[c-'a']++;
	}
	
	int ans=0;
	for(int i=0; i<26; i++){
		if( used[i]>0 ) ans++;
	}
	if(ans==26) printf("Yes");
	else printf("No");
}
```


```cpp
//Week06-0 step01-0 exam
// while  for  if  array

#include <stdio.h>


int main()
{ //BAD BAD BAD... should be int used[26] = { };
	//int used[26];//inside main() without init value
	int used[26]={}; //with init value

	char c;
	while( scanf("%c", &c) == 1 ){
		if( c>='A' && c<='Z' )  used[c-'A']++;
		if( c>='a' && c<='z' )  used[c-'a']++;
	}
	
	int ans=0;
	for(int i=0; i<26; i++){
		if( used[i]>0 ) ans++;
	}
	if(ans==26) printf("Yes");
	else printf("No");
}
```

```cpp
//Week06-0 step01-0 exam
// while  for  if  array

#include <stdio.h>

int used[26];

int main()
{
	char c;
	while( scanf("%c", &c) == 1 ){
		if( c>='A' && c<='Z' )  used[c-'A']++;
		if( c>='a' && c<='z' )  used[c-'a']++;
	}
	
	int bad=0;
	for(int i=0; i<26; i++){
		if( used[i]==0 ) bad=1;
	}
	if(bad==0) printf("Yes");
	else printf("No");
}
```
常出錯的問題
1. if(ans == 不能用 =
2. while( ... == 0 )
3. int used[26] 沒分號
4. for(int i=...
5. 裡面的陣列要 = {  };
6. 雙引號 vs. 單引號

## step01-1_本週主題繼續講解指標,解釋「指標就是陣列、陣列就是指標」方便大家記起來。

```cpp
///Week06-1.cpp step01-1
///The C Programming Language 書寫:
///指標就是陣列、陣列就是指標
#include <stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int * p;

    p = a;
    for(int i=0; i<5; i++){
        printf("a[i]: %d  p[i]: %d\n", a[i], p[i] );
    }
}
```

## step01-2_今天要在 LeetCode 寫一題簡單題 9. Palindrome 迴圈, 因為2週前剛學過。使用剝皮法

先寫一個版本, 確認它可以跑3筆簡單的測試資料

```cpp
//Week06-2.cpp 解 LeetCode 的程式
//不是寫完整的程式, 只要寫一個函式
//判斷迴文, 要用到的程式技巧: 使用 for迴圈, if判斷, while迴圈
bool isPalindrome(int x){
    int x2 = x; //備份x到x2
    int r = 0; //反過來的數字, 等一下要放在 r裡面
    while( x > 0 ){
        r = r*10 + x%10; //剝皮
        x = x / 10;
    }
    //使用剝皮法
    // x        r
    // 121 
    //   1 剝皮 1
    // 12      10
    //  2 剝皮   +2 = 12
    // 1       120
    // 1 剝皮    +1 = 121
    //最後x剝完,變成0...完了 x不能用
    if(x2 == r) return true;
    else return false;
}
```

## step02-1_今天要在 LeetCode 寫一題簡單題 9. Palindrome 迴圈, 因為2週前剛學過。使用剝皮法。不過因為整數像1234567899 反過來 9987654321 會超過整數的32bit, 所以要用 64bit的很長很長的整數 long long int。

```cpp
//Week06-2.cpp 解 LeetCode 的程式
//不是寫完整的程式, 只要寫一個函式
//判斷迴文, 要用到的程式技巧: 使用 for迴圈, if判斷, while迴圈
bool isPalindrome(int x){
    int x2 = x; //備份x到x2
    //很長很長的整數
    long long int r = 0; //反過來的數字, 等下要放r裡面
    while( x > 0 ){
        //很長很長的整數
        r = r*10 + x%10; //剝皮
        x = x / 10;
    }
    //使用剝皮法
    //最後x剝完,變成0...完了 x不能用
    if(x2 == r) return true;
    else return false;
}
```

## step03-1_接下來這題,想結合 week06-1 與 week06-2 也就是「指標就是陣列」與 LeetCode寫程式的技巧。題目利用指標,傳給你一個陣列。你就用陣列的操作方法,來巡每一個陣列的值。26. Remove Duplicates 這題, 要把重覆的除掉、只留下不重覆的部分。我們在做的時候, 重覆的不做事、不重覆的往左邊搬。也就是 nums[k] = nums[i] 其中這個 k 就是目前不重覆、有效的個數。



```cpp
///Week06-3.cpp step03-1
///LeetCode 26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize){
    //今天教: 指標就是陣列、陣列就是指標
    int k=1;
    for(int i=1; i<numsSize; i++) {
        if( nums[i-1]==nums[i] ){
            //不要做事
        } else {
            nums[k] = nums[i];//把新數字搬左邊
            k++;
        }
    }
    return k;
}
///LeetCode 不寫自己的 int main(), 所以想在你的電腦裡跑,要補下面的
#include <stdio.h>
int main()
{
    int a[11] = {0,0,1,1,1,2,2,3,3,4,4};

    int k = removeDuplicates(a, 11);

    for(int i=0; i<k; i++){
        printf("%d ", a[i]);
    }
}
```

## step03-2b_利用 PowerPoint 來畫出前一題,是怎麼將 nums[i] 的值拿到 nums[k] 裡面的過程。最後再介紹網友分享寫LeetCode的經驗

https://leetcode.com/discuss/general-discussion/1653161/my-leetcode-journey-with-some-tips


## step03-2_實習課上機考的每一題, 老師試著解解看

SOIT108_Advance_010) 進階題：億萬富翁 : 題目內容：有一個富翁的財產超過一萬億，所以常常搞不清楚財產到底有多少，現在輸入一個整數N表示富翁的財產總額，請您幫他在財產總額上，從後方每三位加一個逗號，方便閱讀。數字範圍：整數N範圍 為 1000000000000 – 999000000000000。  

- Input: 33423682144992
- Output: ﻿33,423,682,144,992

```cpp
#include <stdio.h>
#include <string.h> //strlen(line)

char line[300];

int main()
{
	scanf("%s", line);
	int N = strlen(line);
	
	for(int i=0; i<N; i++){
		printf("%c", line[i] );
		if((N-1-i)%3==0 && i!=N-1) printf(",");
		//從右開始數N-1-i  (last is N-1)
		//(左邊數是i)
	}
	
}
```

# Week07

## step01-0_考試考 leetcode 的 26. Remove Duplicates 的程式。有很多種不同的寫法。老師在考前複習、考後講解同學出錯的地方。

```cpp
#include <stdio.h>
//請完成下面的 removeDuplicates()函式
int removeDuplicates(int* nums, int numsSize){
    //nums[0] 可以留下來
    //nums[1]開始,都往前面比較 nums[0] vs. nums[1]
    //for(int i=0; i<numsSize; i++) {
    int k=1;
    for(int i=1; i<numsSize; i++) {
        if(nums[i-1] == nums[i]){
            //相等,不做事
        } else {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
//請完成上面的 removeDuplicates()函式
//已幫你準備好下面的 int main()函式, 請不要動它
int main()
{
    int a[100];
    int N = 0;
    for(int i=0; scanf("%d", &a[i])==1; i++){
        N++;
    }
    int k = removeDuplicates(a, N);
    for(int i=0; i<k; i++){
        printf("%d ", a[i]);
    }
}
```

```cpp
#include <stdio.h>
//請完成下面的 removeDuplicates()函式
int removeDuplicates(int* nums, int numsSize){
	int k=1;
	for(int i=1; i<numsSize; i++){
		if(nums[i-1]!=nums[i]){
			nums[k] = nums[i];
			k++;
		}
	}
	return k;
}
//請完成上面的 removeDuplicates()函式
//已幫你準備好下面的 int main()函式, 請不要動它
int main()
{
    int a[100];
    int N = 0;
    for(int i=0; scanf("%d", &a[i])==1; i++){
        N++;
    }
    int k = removeDuplicates(a, N);
    for(int i=0; i<k; i++){
        printf("%d ", a[i]);
    }
}
```


## step01-1_本週的主題是檔案入力出力,也就是Input Output, 寫法和大一上教過的 Hello World 很有關係, 只要多一行即可。使用大寫的FILE檔案指標變數 fout = fopen("file.txt", "w"); 把檔案開啟。之後用 printf()改成 前面加 f 及 fout 的 fprintf()版本。
使用CodeBlocks實作程式 week07-1.cpp 執行印 "檔案就出現了哦"
截圖裡內容比較多, 要開檔案總管,要看到file.txt (若家裡電腦沒有出現 .txt 就要開檢視-副檔名), 再用 Notepad 開 file.txt 看它的內容。截圖上傳 week07-1.png

```cpp
///Week07-1.cpp step01-1 檔案的Input/Output
///先回憶大一上的 printf("Hello World\n");
#include <stdio.h>

int main()
{///檔案指標     檔案開啟("檔名", "模式");
    FILE * fout = fopen("file.txt", "w");
    ///printf("Hello World\n");
    fprintf(fout, "Hello World\n");

    printf("檔案就出現了哦,請檢查檔案總管\n");
}
```

## step01-2_接下來CodeBlocks 實作 week07-2.cpp, 改寫 scanf() 成為 fscanf()。剛剛是印出字串, 所以現在要用字串讀取的方式來做。原本是 scanf("%s", line) 讀入, 現在就改成 fscanf(fin, "%s", line); 同時 fopen("file.txt", "w") 要改成 fopen("file.txt", "r") 變成read讀的意思。因為 scanf() 會用空白斷開, 所以 Hello World 要分2次讀進來。通常出錯時, 是程式的執行目錄出錯, 導到file.txt檔案找不到。

```cpp
///Week07-2.cpp step01-2 檔案的Input/Output
///再回憶大一上的 scanf("%s", line); 讀入一個字
#include <stdio.h>

int main()
{///檔案指標     檔案開啟("檔名", "模式");
 ///FILE * fout = fopen("file.txt", "w"); ///寫 write
    FILE * fin  = fopen("file.txt", "r"); ///讀 read

    ///printf("Hello World\n");
    ///fprintf(fout, "Hello World\n");
    char line[200];
    ///scanf("%s", line);
    fscanf(fin, "%s", line);
    printf("現在執行目錄的檔案裡讀入 %s\n", line);

    fscanf(fin, "%s", line);
    printf("現在執行目錄的檔案裡讀入 %s\n", line);
}
```

## step02-1_大一上教過泡泡排序法, 它很精典, 用到很多程式設計的技巧, 像是 if(判斷), for(迴圈), 陣列 array, 交換等。但上課一問, 大家都忘光光了。老師一步步帶大家再複習一次, 趁機熟悉程式設計的技巧。

```cpp
///Week07-3.cpp step02-1 sort排序 sorting
///大一教過 Bubble sort 泡泡排序
/// if判斷, for迴圈, 陣列array
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};

    for(int k=0; k<10-1; k++){ ///做很多次 攝影師拍團體照,排高低
        for(int i=0; i<10-1; i++){
            if(a[i] > a[i+1]){ ///不對的時候, 就....
                int temp = a[i]; ///交換
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++){
            printf("%d ", a[i] );
        }
        printf("\n");
    }
}
```

## step02-2_上學期教過的 bubble sort (a[i] .vs [i+1]做很多次) 與 selection sort(左手i 右手j) 用到了很多的程式設計技巧, 適合在大一程式設計課的練習, 但是其實他們執行效率都不快。今天上課時,放了 YouTube裡 2228萬次點閱的影片 sorting algorithms 用畫圖配聲音來理解各種排序法。Quick Sort 快速排序法很快。C 的 stdlib.h 可以使用 qsort() 配合自己的 compare 函式。

```cpp
///Week07-4.cpp step02-2 Quick Sort
///對100萬個數字要排序
///之前的泡泡sort, selection sort 對 10000億次的迴圈
///但用 Quick Sort 只要 2000萬次就結束了
#include <stdio.h>
#include <stdlib.h> ///qsort()
int compare(const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};
    qsort( a, 10, sizeof(int), compare);
    for(int i=0; i<10; i++) printf("%d ", a[i] );
}
```

## step03-1_今天最後最帥氣的程式, 是使用 C++ 的 std::sort()來排序, 可以不用寫 compare()比大小的函式。但是要記得 #include 一個 algorithm 檔案, 同時在排序時, 要變它左右的邊界。

```cpp
///Week07-5.cpp step03-1 用 C++ 的方法來排

#include <stdio.h>
#include <algorithm> ///沒有.h 為了 std::sort()

int main()
{
    int a[10] = {9,8,7,1,2,3,6,5,4,0};
    std::sort(a, a+10);

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }

}
```

## step03-2_利用 Git 備份到 GitHub 上
- 0. 安裝 Git, 開啟 Git Bash
- 1. cd desktop 進入桌面, git clone https://網址, cd 2022cce
- 2. start . 開檔案總管, 整理今天的程式 week07
- 3. git add . 將今天的程式加入帳冊
- 4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
- 4.0. git config --global user.name jsyeh
- 4.1. git commit -m week07
- 5. git push 推送上雲端


# Week08
清明節放假

# Week09
期中考週停課

# Week10

程式設計二 2023-04-18 Week10
1. 考試: 排序
2. 主題: C++ vector
3. 主題: 程式會考
4. 主題: LeetCode Study Plan

## 01-0_考試「百數排序」有很多種寫法,也有不同題能寫。老師考前複習、考後講解

```cpp
#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}
	
	//Method 1: Bubble Sort
	for(int k=0; k<100-1; k++){
		for(int i=0; i<100-1; i++){
			if(a[i]>a[i+1]){
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	
	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}
}
```

```cpp
#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	//Method 2: Selection Sort
	for(int i=0; i<100; i++){
		for(int j=i+1; j<100; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}
}
```

```cpp
#include <stdio.h>
#include <stdlib.h> //qsort()
//Method 3: qsort()
int comp( const void *p1, const void *p2 ){
	return *(int*)p1 - *(int*)p2;
}
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i]);
	}
	
	qsort(a, 100, sizeof(int), comp);
	
	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}
}
```

```cpp
#include <stdio.h>
#include <algorithm> //std::sort()
//Method 4: std::sort()
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	std::sort(a, a+100);

	for(int i=0; i<100; i++){
		printf("%d ", a[i] );
	}

}
```

```cpp
///另外一種輸出,有多一些跳行
#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	for(int i=0; i<100; i++){
		for(int j=i+1; j<100; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0; i<100; i++){
		printf(" %d", a[i] );
		if(i%10==9 && i!=99) printf("\n");
	}
}
```

## step01-1_練習 std::vector<int> a 宣告, a.push_back() 插入資料 a[i] 取用對應新陣列的值。

```cpp
///Step01-1 C++ std::vector 可變大小的陣列
#include <stdio.h>
#include <vector> ///step01-1新學的
using namespace std;///step01-1新學的

int main()
{
    ///int a[10];///固定大小,不能超過
    ///std::vector<int> a; ///大小是多少,可以變
    vector<int> a(10); ///宣告 ///step01-1新學的

    for(int i=0; i<10; i++){
        a[i] = i*20; ///你熟悉的用法
        ///a.push_back(i*20); ///加入元素
    ///    scanf("%d", &a[i] );
    ///    printf("%d", a[i] );
    }
    a.push_back(88);
    a.push_back(99);

    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i] ); ///使用方法一樣
    }
}
```

## step02-1_了解課本(C++繪本,第8章上級編), 再多了解 a.size()是新陣列的大小, 再配合 iostream 的 cout 來印出來。

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(10);
    for(int i=0; i<10; i++){
        a[i] = i;
    }

    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }

    a.push_back(88);
    a.push_back(99);
    cout <<endl;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}
```

##  step02-2_今天要帶大家試著刷 LeetCode 的題目, 寫出來可賺10個 LeetCoin金幣。題目簡單 Easy, 登入 LeetCode 點上方Problems, 下面有今天精選的題目 1768. Merge Strings Alternately 把兩個字串交互放到答案裡。其中比較奇怪的有 malloc() 先準備陣列的memory, 因為最長是100所以for迴圈就跑100次, 依序放 word1[i] 及 word2[i], 其中有用到 ans[N++] 這種特別的寫法, 可以一邊放在陣列中, 一邊加大N的值。因為字串長度不一定, 所以要用 int N1 = strlen(word1), N2 = strlen(word2); 得到長度後, if(i<N1) ans[N++] = word1[i]; if(i<N2) ans[N++] = word2[i]; 最後 ans[N] = 0; 字串結尾。

```cpp
//LeetCode 1768. Merge Strings Alternately
char * mergeAlternately(char * word1, char * word2){
    char * ans = (char*) malloc(201);//100+100+1
    //準備陣列的memory allocate

    int N1 = strlen(word1), N2 = strlen(word2);
    int N=0;
    for(int i=0; i<100; i++){
        if(i<N1) ans[N++] = word1[i];
        if(i<N2) ans[N++] = word2[i];//指標就是陣列、陣列就是指標
    }//長度不一樣? 用if判斷
    ans[N] = 0;//字串結尾
    return ans;
}
```

## step03-1_今天教了C++的vector很好用, 現在再教 string 也是很好用。雖然在之前要先 include string 但LeetCode幫你include好了, 所以直接用即可。 string ans 是個可適時改變長度的字串, 可使用 ans += word1[i] 把 string word1 的第 i 格字母 加到 ans 的最後面。這題就寫完了。

```cpp
//LeetCode 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        for(int i=0; i<100; i++){
            if( i < word1.length() )  ans += word1[i];
            if( i < word2.length() )  ans += word2[i];
        }

        return ans;
    }
};
```
## step03-2_在寫 LeetCode 時, 有些題目很難、會很有挫折感, 所以需要有循序漸進的學習計畫 Study Plan, 剛剛老師帶大家加入 LeetCode 75 Level 1的學習計畫, 裡面的題目有精心挑選過, 同學有機會寫出來。Day 1 的 1480. Running Sum of 1d Array 有使用到今天第1節、第2節教的 vector 當成比較厲害的陣列, 配合 nums.size() 放在 for迴圈當範圍, nums[i] 就像傳統陣列的用法。

```cpp
//LeetCode 1480. Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //Study Plan 的 LeetCode 75 的 Day 1 的 1480. Running Sum of 1d Array
        //從1開始,因為要看前一格 nums[i-1]
        for(int i=1; i<nums.size() ; i++){
            nums[i] = nums[i] + nums[i-1];
            //每一格,就是把前一格,加進來
        }
        return nums;
    }
};
```

## step03-3_簡單介紹Study Plan Day 1 的另外一題




# Week11

## step01-0_考試「字串交錯」考前複習、考後講解

## step01-1_LeetCode Study Plan裡,入門的Day 2就有點卡住了。題目 isomorphic這個字太難, 只看題目 Input 後, 猜出這題是要看字母的對應 paper vs. title 的對應相似。foo 和 bee 也是有對應相似。解題策略是用 陣列 做出 左右2個方向的對照表。對照表一開始是空的。如果兩個方向都是空的,那就填好對照表。如果對照表比對合格,就過關、不淘汰。對了, 字串長度如果不對,可以提早淘汰。

```cpp
#include <stdio.h>
#include <string.h> //strlen()
int main()
{
	char line1[20];
	char line2[20];
	scanf("%s%s", line1, line2);
	int N1=strlen(line1);
	int N2=strlen(line2);
	for(int i=0; i<10; i++){
		if(i<N1) printf("%c", line1[i] );
		if(i<N2) printf("%c", line2[i] );
	}

}
```

## step02-1_LeetCode 1046 最後的石頭。題目的陣列裡, 有一堆石頭的大小。挑最大的石頭、第二大的石頭。對敲, 剩下的石頭放回去。石頭會越來越少。最後沒有石頭時, return 0。最後只剩1顆石頭時, return 它的重量。程式有很多種寫法, 老師先用 int findMaxI()的方法, 把最大石頭的 i 取出來, 再進行比較。

```cpp
///1046. Last Stone Weight
int findMaxI(int* stones, int stonesSize){
    int maxI = 0;//左手拿石頭
    for(int i=0; i<stonesSize; i++){//for迴圈
        if(stones[i] > stones[maxI]){//if判斷 stones[i] > 手上拿的石頭
            maxI = i;
        }
    }    //以下程式,會重覆一直使用啊!!!!
    return maxI;
}
int lastStoneWeight(int* stones, int stonesSize){
    while(true){
        int i=findMaxI(stones, stonesSize);//最大石頭
        int a = stones[i];
        stones[i] = 0;
        int j=findMaxI(stones, stonesSize);//第二大石頭
        int b = stones[j];
        stones[j] = 0;
        printf("%d %d\n", a, b);
        if(a==0 && b==0) return 0;//最大石頭都是0,就是0,沒剩石頭
        if(a!=0 && b==0) return a;//只剩左手的那顆,答案

        if(a-b>0){//有剩下石頭
            stones[i] = a-b;
        }
    }
    return 0;
}
    /*int a = findMaxI(stones, stonesSize);
    printf("maxI: %d 對應石頭重:%d\n", a, stones[a]);///小技巧,可用 printf()印出數值,方便找問題
    stones[a] = 0;//石頭拿走,就沒有東西了哦!!!
    int b = findMaxI(stones, stonesSize);
    printf("maxI: %d 對應石頭重:%d\n", b, stones[b]);
    stones[b] = 0;
    int c = findMaxI(stones, stonesSize);
    printf("maxI: %d 對應石頭重:%d\n", c, stones[c]);
    stones[c] = 0;*/
```

## step03-1_為了幫助大家通過程式設計會考, 今天的回家作業,是把銘傳銘傳會考SOIT106的簡單題(12題)都用練習模式寫過一次

程式設計會考的題目講解

## (SOIT106_BASE_001) 基礎題：計算幾週與幾天 : 一週有7 天，讀入天數，計算該天數是幾週又幾天。 

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d %d\n", n/7, n%7 );

}
```

## (SOIT106_BASE_002) 基礎題：找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int n50 = n/50;
	int n5 = (n%50)/5;
	int n1 = (n%5)/1;
	
	printf("%d=50*%d+5*%d+1*%d\n", n, n50, n5, n1);

}
```

## (SOIT106_BASE_003) 基礎題：N數之和 : 輸入一個整數N，之後讀入N個整數，請輸出其和。 

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	for(int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		
		sum += a;
	}
	printf("%d\n", sum);
}
```

## (SOIT106_BASE_004) 基礎題：計程車資計算 : 輸入里程公尺數，輸出應付的車資。計程車資計算方式為：起跳100 元(2000公尺)，續跳5元(每500公尺)。 


```cpp
#include <stdio.h>
int main()
{
	int n, ans;
	scanf("%d", &n);

	if(n<=2000) ans = 100;
	else if( n%500==0 ) ans = 100 + (n-2000)/500 * 5;
	else ans = 100 + (n-2000)/500 * 5 + 5;
	
	printf("%d\n", ans);
}
```

## (SOIT106_BASE_005) 基礎題：因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。 

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);


	int ans = 0;
	for(int i=1; i<=n; i++){
		if( n%i==0 ) ans ++;
	}
	printf("%d\n", ans);
}
```

## (SOIT106_BASE_006) 基礎題：三數極大 : 輸入三個正整數，輸出其最大值。 

```cpp
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	int ans;
	if(a>=b && a>=c) ans = a;
	else if(b>=a && b>=c) ans = b;
	else ans = c;

	printf("%d\n", ans);
}
```

## (SOIT106_BASE_007) 基礎題：計算商數 : 輸入兩個整數a，b，輸出a除以b的商。 

```cpp
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("%d\n", a/b);

}
```

## SOIT106_BASE_008) 基礎題：兩數間可被5整除的整數 : 輸入兩個整數，找出兩數之間所有可以被5整除的整數。 

```cpp
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	for(int i=a; i<=b; i++){
		if(i%5==0) printf("%d\n", i);
	}

}
```


## (SOIT106_BASE_009) 基礎題：整數間最大距離 : 輸入3個相異整數，找出整數間最大的距離。 

```cpp
#include <stdio.h>
int main()
{
	int a, b, c, max, min;
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>=b && a>=c) max=a;
	else if(b>=a && b>=c) max=b;
	else max = c;
	
	if(a<=b && a<=c) min=a;
	else if(b<=a && b<=c) min=b;
	else min = c;


	printf("%d\n", max-min);
}
```

## (SOIT106_BASE_011) 基礎題：判斷大小 : 輸入2個整數，如果第一個數字比第二個數字小；則出輸-1，如果兩個數字相等，則輸出0；如果第一個數字比第二數字大，則出輸1。 

```cpp
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	if(a>b) printf("1\n");
	if(a==b) printf("0\n");
	if(a<b) printf("-1\n");

}
```

## (SOIT106_BASE_012) 基礎題：整數轉換為等級 : 輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C；如為其他整數，則輸出F。  

```cpp
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if(n>=90) printf("A\n");
	else if(n>=80) printf("B\n");
	else if(n>=60) printf("C\n");
	else printf("F\n");
}
```

## (SOIT106_BASE_010) 基礎題：找倍數 : 連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 

```cpp
#include <stdio.h>
int main()
{
	int ans=0, n;
	for(int i=0; i<10; i++){
		scanf("%d", &n);
		if(n%3==0) ans++;
	}
	printf("%d\n", ans);
}
```



## (SOIT107_ADVANCE_006) 進階題：除惡務盡 : 輸入一個字串，將所有字元2去除後輸出。 
```cpp
#include <stdio.h>
//#include <string.h>
int main()
{
	char line[300];
	scanf("%s", line);
	
	//int N = strlen(line);
	//for(int i=0; i<N; i++){
	for(int i=0; line[i]!=0; i++){
		if(line[i]!='2') printf("%c", line[i] );
	}
	printf("\n");
}
```

另外一種寫法, 以字母為單位

```cpp
#include <stdio.h>
int main()
{
	char c;
	while( scanf("%c", &c)==1 ){
		if(c!='2') printf("%c", c);
	}
	//printf("\n");

}
```

## (SOIT106_ADVANCE_011) 進階題：2進位轉10進位 : 讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。 

```cpp
#include <stdio.h>
int main()
{
	char line[10];
	scanf("%s", line);
	
	int ans=0;
	if(line[0]=='1') ans += 8;
	if(line[1]=='1') ans += 4;
	if(line[2]=='1') ans += 2;
	if(line[3]=='1') ans += 1;
	
	printf("%d\n", ans);

}
```

另一種暴力的寫法

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans;
	if(n==   0) ans=0;
	if(n==   1) ans=1;
	if(n==  10) ans=2;
	if(n==  11) ans=3;
	if(n== 100) ans=4;
	if(n== 101) ans=5;
	if(n== 110) ans=6;
	if(n== 111) ans=7;
	if(n==1000) ans=8;
	if(n==1001) ans=9;
	if(n==1010) ans=10;
	if(n==1011) ans=11;
	if(n==1100) ans=12;
	if(n==1101) ans=13;
	if(n==1110) ans=14;
	if(n==1111) ans=15;


	printf("%d\n", ans);
}
```


# Week11

## step01-0_考試四選一、考前復習、考後解說同學出錯的地方

## step01-1_LeetCode 258 Add Digits 會使用到上學期教過的「剝皮法」,而且要剝很多次

先用笨方法, 重覆做很多次

```cpp
int addDigits(int num){
    // 1,999,999,999
    int ans=0;
    while(num>0){ //剝皮法
        ans += num % 10;//個位數
        num = num / 10; //數字變小了
    }
    num = ans; //剛剛加出11,再做一次剝皮法
    //82

    ans = 0;
    while(num>0){
        ans += num % 10;
        num = num / 10;
    }
    num = ans;
    //10

    ans = 0;
    while(num>0){
        ans += num % 10;
        num = num / 10;
    } 
    //1
    return ans;
}
```

再改用一個大的迴圈,來重覆做很多次

```cpp
//LeetCode 258 Add Digits
int addDigits(int num){
    while(num>=10){ //如果num是2位數以上, 繼續進行剝皮

        int ans = 0;
        while(num>0){//剝皮法
            ans += num % 10;//個位數
            num = num / 10; //數字變小了
        }
        num = ans; //最後答案放回 num 以便下一次再剝皮

    }

    return num;
}
```

## step02-1_LeetCode 1822 乘起來是正的 還是負的, 老師在示範時, 利用 for迴圈 和 if判斷, 去測每一個數字是否是負的, 最後再看有幾個負數, 奇數個負號, 就return -1。不過有個特殊狀況, 如果裡面有0的話, return 0 提早結束。

```cpp
//LeetCode 1822. Sign of the Product of an Array 想看乘起來的正負號
int arraySign(int* nums, int numsSize){
    int ans = 0; //有幾個 <0 的負數?
    for(int i=0; i<numsSize; i++){
        if(nums[i] < 0) ans++;
        if(nums[i]==0) return 0;//提早結束囉! 0沒救了
    }
    if(ans%2==1) return -1;
    else return 1;
}
```

## step02-2_LeetCode 191 有幾個1的Bits, 會用到今天第1節課用到的「剝皮法」,還有第2節課用到的「數一數有幾個」的技巧

```
LeetCode 191. Number of 1 Bits

int hammingWeight(uint32_t n) {
    int ans=0;
    while(n>0){ //數字還沒剝完,就繼續做
        int now = n%2; //剝一層皮
        if(now==1) ans++; //剝下來的皮,有幾個1
        n = n / 2; //數字又變更小了
    }
    return ans;
}
    //剝皮法
    /*1234
       4
    123
      3
    12
     2
    1
    
    0
    */
```


## step03-1_今天的會考考題, 老師錄影示範了 SOIT106_ADVANCE_001...006共6題

```cpp
///SOIT106_ADVANCE_001：進階題：反序數字
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int n2 = n; //backup

	int ans=0;
	while(n>0){
		ans = ans * 10 + n%10;
		n = n / 10;
	}

	printf("%d+%d=%d\n", n2, ans, n2+ans);

}
```

```cpp
//(SOIT106_ADVANCE_002) 進階題：分式化簡 : 
//輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。 

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	int ans;
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0) ans =i;
	}
	
	printf("%d %d\n", a/ans, b/ans);
}
```

```cpp
//SOIT106_ADVANCE_003) 進階題：讀入整數反序列印 : 
//設計一個程式，該程式可以連續讀入正整數
//(輸入0表示結束，至多不超過10個正整數)，
//之後將所輸入的正整數以相反序顯示在畫面上。 

#include <stdio.h>

int main()
{
	int a[11];
	
	int N;
	for(int i=0; i<11; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}


	for(int i=N-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
```

```cpp
//(SOIT106_ADVANCE_004) 進階題：大小寫轉換 : 
//讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換
//(大寫轉為小寫，小寫轉為大寫)後輸出。  

#include <stdio.h>
int main()
{
	//char line[20];
	//scanf("%s", line);
	
	//char line[11];
	//scanf("%10s", line);
	
	
	char c;
	while( scanf("%c", &c) ==1 ){
		if(c>='a' && c<='z') c = c-'a'+'A';
		else if(c>='A' && c<='Z') c = c-'A'+'a';
		
		printf("%c", c);
	}
}
```


```cpp
//(SOIT106_ADVANCE_005_C) 進階題：A的B次方函數  
//題目名稱：A的B次方函數
//題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
//數字範圍：整數 1 – 9。
//程式限制：不得使用power()函數。不得變更已給定的主程式。

#include <stdio.h>

int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=0; i<b; i++){
		ans = ans * a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```


```cpp
//(SOIT106_ADVANCE_006) 進階題：漸增數列相加 :
//輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int ans=0;
	for(int i=1; i<n; i++){
		ans += i*(i+1);
	}

	printf("%d\n", ans);
}
```

# Week13

## step01-0_考試考前複習、考後講解

```cpp
//(SOIT106_ADVANCE_003) 進階題：讀入整數反序列印 :
// 設計一個程式，該程式可以連續讀入正整數
//(輸入0表示結束，至多不超過10個正整數)，
//之後將所輸入的正整數以相反序顯示在畫面上。
#include <stdio.h>
int main()
{
	int a[20];
	int N=0;
	for(int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}
	
	for(int i=N-1; i>=0; i--){
		printf("%d ", a[i] );
	}
	printf("\n");
}
```

```cpp
//(SOIT106_ADVANCE_004) 進階題：大小寫轉換 :
//讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換(
//大寫轉為小寫，小寫轉為大寫)後輸出。
#include <stdio.h>

int main()
{
	char c;
	while( scanf("%c", &c)==1 ){
		if(c>='A' && c<='Z') c = c - 'A' + 'a';
		else if(c>='a' && c<='z') c = c - 'a' + 'A';

		printf("%c", c);
	}
}

//這題有人用另一種寫法 c += 32 或 c-=32 因為
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", -'A'+'a'); //會印出32
//    printf("%d\n", -'a'+'A'); //會印出-32
//}
```

```cpp
//(SOIT106_ADVANCE_006) 進階題：漸增數列相加 :
// 輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int ans = 0; 
	for(int i=1; i<n; i++){
		ans += i*(i+1);
	}
	printf("%d\n", ans);
}
```

## step01-1_老師介紹 LeetCode 有人分享她努力賺金幣、得到(有錢買不到的)LeetCode小禮物的故事

https://leetcode.com/discuss/feedback/2748282/unboxing-my-leetcode-laptop-sleeve-my-story-on-leetcode

## step02-1_今天的 LeetCode挑戰題比較難, 54 Spiral 螺旋繞圈圈。希望大家能慢慢在 LeetCode賺到金幣, 可以換到限量的小禮物, 所以要慢慢累積。54 Spiral螺旋的這題, 用 C++ 寫時, 大家比較不熟第10週教過的 vector 其實就是可以變換長度的陣列, 所以先體會宣告 vector<ans> ans 後, 直接 return ans 不要有錯誤。再來是要理解 matrix[i][j] 這個用法, 配合for迴圈,看大家熟不熟悉, 其中 M = matrix.size(), N = matrix[0].size() 得到矩陣的大小。這題最難的是轉向, 所以利用 i+=di 與 j+=dj 來方便大家把 i++ i-- j++ j++ 換成一個可靈活切換的版本。最後, 轉方向的部分, 用 dir=0, 1, 2, 3 來代表四種方向, 取用 di[4] 及 dj[4] 裡面的 4種值。最多的程式, 其實就在轉向, 往右遇到右邊界, 就轉方向(並改變新邊界)。請在 LeetCode實作, 並截圖上傳 week13-1.png (程式碼 week13-1.cpp 則上傳到GitHub)

```cpp
class Solution {
public: //用C++寫 今天挑戰題 LeetCode 54 迴旋
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans; //step01
        int M = matrix.size(); //step03
        int N = matrix[0].size(); //step03
        int i=0, j=0; //step04
        int dir=0; //0:右, 1:下, 2:左, 3:右
        //int di=0, dj=1;//要轉向 //step05
        int di[4] = {0, 1, 0, -1};
        int dj[4] = {1, 0, -1, 0};
        int left=0, right=N-1, up=1, down=M-1;//上下左右邊界
        for(int k=0; k<M*N; k++){
            ans.push_back( matrix[i][j] );//step04
            if(dir==0 && j==right){ //往右,遇到右邊界,轉方向(並改變新邊界)
                dir++; //step06
                right--;
            }else if(dir==1 && i==down){ //往下,遇到下邊界(並改變新邊界)
                dir++; //step06
                down--;
            }else if(dir==2 && j==left){ //往左,遇到左邊界(並改變新邊界)
                dir++; //step06
                left++;
            }else if(dir==3 && i==up){ //往上,遇到上邊界(並改變新邊界)
                dir = 0; //step06再回到右方向
                up++;
            }
            i += di[dir];//step05遇到邊界要轉向
            j += dj[dir];
        }
        return ans; //step01
    }
};
        //for(int i=0; i<M; i++){ //step03
        //    for(int j=0; j<N; j++){ //step03
        //        matrix[i][j]; //step02
        //    }
        //}
```

## step03-1_程式會考刷題 SOIT106_ADVANCE_007..012

```cpp
//(SOIT106_ADVANCE_007) 進階題：迴文判斷 :
//題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。
//如果該數字構成廻文(即由左而右，由右而左，順序相同)，則顯示YES。
//如果該數字未構成迴文，則顯示NO。
#include <stdio.h>
int main()
{
	char c1, c2, c3, c4;
	scanf("%c%c%c%c",&c1,&c2,&c3,&c4);

	if(c1==c4 && c2==c3) printf("YES\n");
	else printf("NO\n");

}
```

```cpp
///(SOIT106_ADVANCE_008_C) 進階題：絕對值函數 :
#include <stdio.h>

int f(int n)
{
	if(n<0) return -n;
	else return n;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

```cpp
//(SOIT106_ADVANCE_009) 進階題：函數反序排列數字 :
//設計一個函數f(n)，該函數可以傳回整數n的數字反序排列所組成的整數。
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0;
	while(n>0){
		ans = ans * 10 + n%10;

		n = n / 10;
	}
	printf("%d\n", ans);
}
```

```cpp
// (SOIT106_ADVANCE_010) 進階題：計算陣列的平方值 :
//輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，
//再列出此算出平方值後的陣列。
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int temp;
		scanf("%d", &temp);

		printf("%d,", temp*temp);
	}

	printf("\n");
}
```

```cpp
//(SOIT106_ADVANCE_011) 進階題：2進位轉10進位 :
//讀入一個0000 ~ 1111的2進位整數(固定4位數)，
//請顯示出對應的10進位數字。

#include <stdio.h>
int main()
{
	char c1, c2, c3, c4;
	scanf("%c%c%c%c", &c1,&c2,&c3,&c4);

	int ans=0;
	if(c1=='1') ans += 8;
	if(c2=='1') ans += 4;
	if(c3=='1') ans += 2;
	if(c4=='1') ans += 1;

	printf("%d\n", ans);

}
```

```cpp
//(SOIT106_ADVANCE_012) 進階題：陣列找出現次數 :
//讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數列至多包含10個整數)，
//之後再讀入一個正整數，程式可以找出該整數出現在數列中的次數。
#include <stdio.h>
int main()
{
	int N=0;
	int a[20];
	for(int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if(a[i]==0){
			N = i;
			break;
		}
	}

	int ans=0;
	int next;
	scanf("%d", &next);
	for(int i=0; i<N; i++){
		if(a[i]==next) ans++;
	}
	printf("%d\n", ans);
}
```

# Week14
程式設計二 2023-05-16 Week14
1. 考試 SOIT106-7,8,10,11 四題挑1題
2. LeetCode 709: To Lower Case
3. LeetCode 217: Contains Duplicate
4. <del>LeetCode 1309: Decrypt String from Alphabet to Integer Mapping</del>
5. LeetCode 每日挑戰 24. Swap Nodes in Pairs
6. 會考刷題

## step01-0_考試4選1, 考前複習、考後講解
```cpp
//(SOIT106_ADVANCE_011) 進階題：2進位轉10進位 :
//讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。

#include <stdio.h>
int main()
{
	char c1, c2, c3, c4;
	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

	int ans = 0;
	if(c1=='1') ans += 8;
	if(c2=='1') ans += 4;
	if(c3=='1') ans += 2;
	if(c4=='1') ans += 1;
	printf("%d\n", ans);
}
```

```cpp
//(SOIT106_ADVANCE_010) 進階題：計算陣列的平方值
//: 輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，再列出此算出平方值後的陣列。
//數字範圍：整數N範圍 1 – 10；其他整數1 – 100

#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		int temp;
		scanf("%d", &temp);
		printf("%d,", temp*temp);
	}
	printf("\n");
}
```

```cpp
//(SOIT106_ADVANCE_007) 進階題：迴文判斷 :
//題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。
//如果該數字構成迴文(即由左而右，由右而左，順序相同)，則顯示YES。
//如果該數字未構成迴文，則顯示NO。

#include <stdio.h>
int main()
{
	char c1, c2, c3, c4;
	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

	if(c1==c4 && c2==c3) printf("YES\n");
	else printf("NO\n");

}
```

```cpp
// (SOIT106_ADVANCE_008_C) 進階題：絕對值函數 :
#include <stdio.h>
int f(int n)
{
	if(n<0) return -n;
	else return n;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```


## step01-1_LeetCode 709 變小寫,簡單利用字串的迴圈,配上if判斷,就能把陣列裡的大寫變小寫。

```cpp
///LeetCode 709 變小寫
char * toLowerCase(char * s){
    for(int i=0; s[i]!=0; i++){
        if(s[i]>='A' && s[i]<='Z') s[i] = s[i] -'A'+'a';
    }
    return s;
}
```

```cpp
///LeetCode 709 變小寫
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z') s[i] = s[i] - 'A' + 'a';
        }
        return s;
    }
};
```


## step01-2_今天的LeetCode挑戰題10個金幣, 24兩兩交換,有用到指標,還有大二上常用的資料結構struct。利用迴圈,one,two去比到兩兩相鄰的一組,然後交換它的內容


```cpp
class Solution { ///LeetCode 24 兩兩交換 (每日挑戰 10金幣)
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head; //太少,提早結束

        ListNode* one = head;
        ListNode* two = head->next;
        while(one!=nullptr && two!=nullptr){
            int temp = one->val;
            one->val = two->val;
            two->val = temp;
            //以上是交換裡面的 val 值

            if(one->next!=nullptr) one = one -> next -> next; //下下筆
            else break; //其實這裡可簡化,但為了對稱,就照寫

            if(two->next!=nullptr) two = two -> next -> next; //下下筆
            else break;
        }
        return head; //整串給人家
    }
};
```


## step02-1_會考刷題, SOIT107基礎題1,2,3,4,5,6,

```cpp
//(SOIT107_Base_001) 基礎題：找零錢 :
//假設有50元、10元、5元和1元等4種硬幣，請輸入一個金額
//，並顯示等同於該金額所需的最少硬幣組合。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int n50 = n /50;
	int n10 = n%50 /10;
	int n5 = n%10 /5;
	int n1 = n%5;

	printf("%d=50*%d+10*%d+5*%d+1*%d", n, n50, n10, n5, n1);

}
```

```cpp
//(SOIT107_Base_002) 基礎題：計程車資計算 :
//輸入里程公尺數，輸出應付的車資。計程車資計算方式為:
//起跳100元(1500公尺)，續跳5元(每250公尺)註:不足250公尺也要5元。

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0;
	if(n<=1500) ans = 100;
	else {
		ans = 100 + (n-1500)/250*5;
		if(n%250>0) ans += 5; //可惡,又多跳1次表
	}// n+249
	printf("%d", ans);
}
```

```cpp
//(SOIT107_Base_003) 基礎題：計算餘數 :
//輸入兩個整數a b，輸出a除以b的餘數

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d", a%b);

}
```

```cpp
//(SOIT107_Base_004) 基礎題：整數轉換等級 :
//輸入一個整數成，如果所輸入的整數大於或等於90，則輸出A;
//如果輸入的整數小於90但大於等於80，則輸出B;
//如果小於80但大於或等於70，則輸出C;
//如果小於70但大於或等於60，則輸出D;
//如為其他整數則輸出F。

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n>=90) printf("A");
	else if(n>=80) printf("B");
	else if(n>=70) printf("C");
	else if(n>=60) printf("D");
	else printf("F");

}
```

```cpp
///(SOIT107_Base_005) 基礎題：計算餘數及列印 :
//撰寫一個程式，要求使用者輸入兩個數字(變數名稱分別為x,y)，
//再從使用者取得這兩個數字，x為被除數，y為除數，然後印出計算後的餘數(remainder)。

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("Enter two numbers: The remainder is ");
	printf("%d\n", a%b);

}
```

```cpp
///(SOIT107_Base_006) 基礎題：判別正方形 :
//撰寫一個程式要求使用者輸入矩形的長與寬，然後讀進這兩個整數。
//假如長與寬相同則印出訊息「It is a square」，
//否則印出訊息「It is not a square」。只能使用本章所學到的單一if敘述式。

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("Enter two numbers:  ");

	if(a==b) printf("It is a square ");
	else printf("It is not a square ");

}
```


## step02-2_會考刷題, SOIT107基礎題7,8,9,10,11,12

```cpp
//(SOIT107_Base_007) 基礎題：分開整數的每個數字 :
//撰寫一個程式，輸入一個五位數的數字，將這個數字分成個別的數字，
//然後分別印出每個數字，數字中間必須相隔3個空格。
//例如，若輸入42139，則程式必須印出： 4 2 1 3 9

#include <stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	scanf("%c%c%c%c%c", &c1,&c2,&c3,&c4,&c5);

	printf("%c   %c   %c   %c   %c", c1,c2,c3,c4,c5);

}
```

```cpp
// (SOIT107_Base_008) 基礎題：將一連串整數相乘 :
//請撰寫一個會將一連串整數相乘的程式。
//假定以scanf所讀取的第一個整數，是用於指出接下來要輸入的數值的個數。
//你的程式每執行一次scanf，必須只能讀取一個數值。
//底下是一個輸入列的範例 3 20 50 12 其中3表示後面共有3筆資料要輸入。
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int N;
	scanf("%d", &N);

	int ans = 1;
	for(int i=0; i<N; i++){
		printf("Enter a value: ");
		int temp;
		scanf("%d", &temp);
		ans *= temp;
	}
	printf("Product of the %d values is ", N);
	printf("%d", ans);
}
```

```cpp
//(SOIT107_Base_009) 基礎題：我們與惡的距離 :
// 輸入一個整數，輸出該整數與2的距離。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = n - 2;
	if(ans<0) ans = 2 - n;

	printf("%d", ans);

}
```

```cpp
//(SOIT107_Base_010) 基礎題：平年月份的天數 :
//輸入一個整數N，輸出平年中N月的天數。

#include <stdio.h>
int main()
{
	//a[0] nothing
	//a[1] January
	//a[12] December
	int a[13]={0, 31,28,31,30,31,30,31, 31,30,31,30,31};
	int n;
	scanf("%d", &n);
	printf("%d", a[n]);
}
```

```cpp
//(SOIT107_Base_011) 基礎題：整數二元四則運算 :
//輸入兩個整數 a 與 b 及其 中間的四則運算子 c，輸出其運算結果。
#include <stdio.h>
int main()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);


	int ans=0;
	if(c=='+') ans = a+b;
	if(c=='-') ans = a-b;
	if(c=='*') ans = a*b;
	if(c=='/') ans = a/b;

	printf("%d", ans);

}
```

```cpp
//(SOIT107_Base_012) 基礎題：字元判別 :
//輸入一個字元，若其為大寫字母則輸出U，若其為小寫字母則輸出L，若其為數字則輸出D，若為其他則輸出O。
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);

	if(c>='A' && c<='Z') printf("U");
	else if(c>='a' && c<='z') printf("L");
	else if(c>='0' && c<='9') printf("D");
	else printf("O");

}
```

## step03-1_補一題簡單的 LeetCode 217 找相同、重覆。想要知道陣列裡, 有沒有重覆的數字, 怎麼辦... 用暴力比對法(左手i右手j兩層迴圈)會超過時間。所以可以使用 qsort()先把數字快速排好, 因為相同的數字會被擠在一起, 所以再模仿泡泡排序法的那個比較的迴圈, 相鄰的去比, 便能快速找到有沒有相同的數

```cpp
//LeetCode 217 陣列裡, 有沒有「相同、重覆」
int comp(const void*p1, const void*p2){
    return *(int*)p1 - *(int*)p2;
}
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);
    //先排好, 相同的就會當鄰居
    for(int i=0; i<numsSize-1; i++){
        if(nums[i]==nums[i+1]) return true;
    }//如果相鄰的是相同的, 就找到了!!!

    return false;//沒有找到相同的
}
/*
    暴力比對,會超過時間, 因為 10萬*10萬=100億次
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]==nums[j]) return true;
        }
    }
    return false;
*/
```

## step03-2_下週考試題目示範

```cpp
//(SOIT107_Base_013) 基礎題：幾日為星期幾 :
//假設某月的1號為星期日，請讀入日數，並找出對應的星期數
//(週日以0表示，週一以1表示，以此類推，至週六以6表示)。

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", (n-1)%7);

}
```

```cpp
//(SOIT107_Base_014) 基礎題：零錢總額 :
//假設有50元、5元和1元等3種硬幣，請分別輸入三種硬幣的數量
//(分別讀入50元、5元、1元硬幣的數量)，計算出這些硬幣的總額。

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	printf("%d", a*50 + b*5 + c*1);

}
```

```cpp
//(SOIT107_Base_015) 基礎題：數字之首 :
//輸入一個整數N，請找出這個數字的首位數。

#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);

	printf("%c", c);

}
```

```cpp
//(SOIT107_Base_016) 基礎題：兩數平方差 :
//讀取兩變數a與b之值，計算出a2-b2之值
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d", a*a-b*b);

}
```

```cpp
//(SOIT107_Base_017) 基礎題：剩餘啤酒有幾手又幾瓶 :
//假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，
//試回答共剩幾手啤酒又幾瓶？
#include <stdio.h>

int main()
{
	int p, d;

	scanf("%d%d", &p, &d);

	printf("%d %d", (p-6*d)/6, (p-6*d)%6);

}
```

```cpp
//(SOIT107_Base_018) 基礎題：輸出從0到N的偶數 :
//輸入一正整數Ｎ後，利用迴圈概念輸出所有0～N內的偶數
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		if(i%2==0) printf("%d ", i);
	}

}
```

```cpp
//(SOIT107_Base_019) 基礎題：三數最小 :
//寫一方法能接受三個正整數，並回傳其最小值

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int ans;
	if(a<=b && a<=c) ans = a;
	if(b<=a && b<=c) ans = b;
	if(c<=a && c<=b) ans = c;

	printf("%d\n", ans);

}
```

```cpp
//(SOIT107_Base_020) 基礎題：計算立方值 :
//依序輸入六個整數，輸出六個數的立方值。

#include <stdio.h>
int main()
{
	for(int i=0; i<6; i++){
		int n;
		scanf("%d", &n);

		printf("%d\n", n*n*n);
	}
}
```


## step03-3
git bash開起來
- cd desktop 進入桌面
- git clone https://github.com/jsyeh/2022cce
- cd 2022cce
- start .   開檔案總管

接下來,整理你的程式 week14 目錄, 再加到帳冊
- git status 會秀紅色(不重要)
- git add .  加入帳冊(這行才重要)
- git status 會秀綠色(不重要)

接下來, 要確認你的修改
- git config --global user.email jsyeh@mail.mcu.edu.tw
- git config --blobal user.name jsyeh
- git commit -m week14
最後, 推送上雲端
- git push



# Week15

## step01-1_今天LeetCode每日挑戰 703. 第k大的數字。這題表面上是Easy題, 其實有點難。直覺的想法, 是把數字排好(sort排序), 再把第k大的數字取出來。雖然這個方法會超過時間, 不過我們先從簡單、容易理解的方法來試著做。請在 LeetCode裡實作這個「有點暴力」的方法, 只用 Run (不要送出) 看到綠色的暫時通通

```cpp
//LeetCode 703 Kth Largest Element in a Stream 
//先用「沒效率/會超過時間TLE」的寫法 sort()
class KthLargest {
public:
    //本題,要找第k大的數字
    int k2;
    vector<int> all;
    KthLargest(int k, vector<int>& nums) {
        k2 = k;//備份一下k
        for(int i=0; i<nums.size(); i++){
            all.push_back( nums[i] );
        }//備份好全部的數字
    }
    
    int add(int val) {
        all.push_back(val);
        sort(all.begin(), all.end()); //從小到大排好(比較沒有效率)
        //最出第k大的數字 (我們記成 k2)
        return all[ all.size() - k2 ];//return all[k2];不行,因為all是小到大,我們要大到小
    }
};
```

## step01-2_有了前面(使用暴力sort法,超過時間,但程式的架構清楚), 接下來換用大二「資料結構」會教的 Priority Queue (又叫 Heap, 它不會全部排序, 但可把最大(或最小的)的浮在最上面, 最最大的值是又快又好), 因為限定只留下前k個數字, 所以數字太多時, 就 pop() 丟掉。經過修改, 恭喜大家拿到今天10個金幣了

```cpp
//LeetCode 703 Kth Largest Element in a Stream 
//改用剛好合用的 priority_queue 來找到 最大的k個數裡面,最小的數(也就是第k大的數)
class KthLargest {
public:
    //本題,要找第k大的數字
    int k2;
    //vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;//備份一下k
        for(int i=0; i<nums.size(); i++){
            all.push( nums[i] );
            if(all.size()>k2) all.pop(); //超過數量,就丟
        }//備份好全部的數字
    }
    
    int add(int val) {
        all.push(val);
        if(all.size()>k2) all.pop(); //超過數量,就丟
        //sort(all.begin(), all.end()); //從小到大排好(比較沒有效率)
        //最出第k大的數字 (我們記成 k2)
        return all.top(); //return all[ all.size() - k2 ];//return all[k2];不行,因為all是小到大,我們要大到小
    }
};
```



## step02-1_考試考前複習、考後講解

```cpp
//(SOIT107_Base_013) 基礎題：幾日為星期幾 : 假設某月的1號為星期日，請讀入日數，
//並找出對應的星期數(週日以0表示，週一以1表示，以此類推，至週六以6表示)。 

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d", (n-1)%7 );

}
```

```cpp
//(SOIT107_Base_015) 基礎題：數字之首 : 
//輸入一個整數N，請找出這個數字的首位數。 
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	
	printf("%c", c);
}
```

```cpp
//(SOIT107_Base_016) 基礎題：兩數平方差 : 
//讀取兩變數a與b之值，計算出a2-b2之值 

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("%d", a*a - b*b);

}
```

```cpp
//(SOIT107_Base_017) 基礎題：剩餘啤酒有幾手又幾瓶 :
//假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？ 
#include <stdio.h>
int main()
{
	int p, d;
	scanf("%d%d", &p, &d);

	int ans = p - 6*d;
	
	printf("%d %d", ans/6, ans%6);
}
```

```cpp
//(SOIT107_Base_020) 基礎題：計算立方值 :
//依序輸入六個整數，輸出六個數的立方值。

#include <stdio.h>
int main()
{
	for(int i=0; i<6; i++){
		int n;
		scanf("%d", &n);
		printf("%d\n", n*n*n);
	}

}
```

## step02-2_會考刷題 SOIT108 基礎題1,3,3a,4

 
```cpp
//(SOIT108_Base_001) 基礎題：找千位數 : 
//讀入 1000 - 100000 的數字，找出其千位數的數字 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d", n/1000 %10);
}
```

```cpp
//(SOIT108_Base_003) 基礎題：正整數平方總和 : 
//題目內容：輸入正整數n，可計算：1*1+2*2+...+n*n 
//之總和的結果。數字範圍：整數1~1000  
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);


	int ans = 0;
	for(int i = 1; i<=n; i++){
		ans += i*i;
	}
	printf("%d", ans);
}
```

```cpp
//(SOIT108_Base_003A) 進階題：兩數之間的3倍數總和 
//: 題目內容：請輸入兩個由小到大的正整數(起始數字與終止數字)，
//可計算出【起始數字】到【中止數字】間所有3的倍數之總和。
//{ex. 3 9 => 3+6+9=18} 數字範圍：整數1~1000  
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(i%3==0) ans += i;
	
	}
	printf("%d", ans);
}
```

```cpp
//(SOIT108_Base_004) 基礎題：判斷座標的象限 :
//題目內容：判斷所輸入座標(x,y)的所在象限，
//(僅考慮在四個象限的情況，不考慮在軸線及原點的情況)。
//{ex.(1,1)屬第一象限、(-1,1)屬第二象限、
//(-1,-1)屬第三象限、(1,-1)屬第四象限}
// 數字範圍：整數 -1000~1000  
#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);


	if(x>0 && y>0) printf("1\n");
	if(x<0 && y>0) printf("2\n");
	if(x<0 && y<0) printf("3\n");
	if(x>0 && y<0) printf("4\n");
}
```

## step02-3_會考刷題 SOIT108 基礎題 5,6,7,10

```cpp
//(SOIT108_Base_005) 基礎題：輸入n (n>0)， 求n之所有因數和 : 
//輸入n (n>0)， 求 n之所有因數和。
//{ex. 2之因數為1、2，因數和為因數加總1+2=3}  
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);


	int ans = 0;
	for(int i=1; i<=N; i++){
		if(N%i==0) ans += i;
	}
	printf("%d", ans);
	
}
```

```cpp
//(SOIT108_Base_006) 基礎題：輸入西元y年，判斷該y年是否為閏年 : 
//輸入西元y年，判斷該y年是否為閏年，輸出相對訊息。
//{閏年定義：西元年份除以4可整除，且除以100不可整除，為閏年。 
//西元年份除以100可整除，且除以400不可整除，為平年}  
#include <iostream>
using namespace std;

int main()
{
	int y; cin>>y;

	if(y%400==0 || (y%100!=0 && y%4==0)){
		cout << y << " is a leap year.\n";
	}else cout << y << " is not a leap year.\n";
}
```

```cpp
//(SOIT108_Base_006) 基礎題：輸入西元y年，判斷該y年是否為閏年 :
//輸入西元y年，判斷該y年是否為閏年，輸出相對訊息。
//{閏年定義：西元年份除以4可整除，且除以100不可整除，為閏年。
// 西元年份除以100可整除，且除以400不可整除，為平年}  
#include <stdio.h>
int main()
{
	int y;
	scanf("%d", &y);


	int leap = 0;
	if(y%400==0) leap = 1;
	else if(y%100==0) leap = 0;
	else if(y%4==0) leap = 1;
	else leap = 0;
	
	if(leap==1) printf("%d is a leap year.\n", y);
	else printf("%d is not a leap year.\n", y);
}
```

```cpp
//(SOIT108_Base_007) 基礎題：把數字倒著印出來 :
//題目內容：輸入10個整數，把這10個數字倒著印出來。數字範圍：整數1 – 100
#include <stdio.h>
int main()
{
	int a[10];


	for(int i=0; i<10; i++){
		scanf("%d", &a[i] );
	}

	for(int i=10-1; i>=0; i--){
		printf("%d ", a[i] );
	}
}
```


```cpp
//(SOIT108_Base_010) 基礎題：水杯接水 :
//題目內容：有一桶水要分裝到杯子中，
//水桶中的水有N毫升，杯子的容量為M毫升，
//請問至少需要幾個杯子才能承接水桶裡的水。
//現在輸入N與M，請輸出答案。
//數字範圍：N為1 – 9999，M為1 –99  
#include <stdio.h>
int main()
{

	int a, b;
	scanf("%d%d", &a, &b);
	
	
	int ans = a/b;
	if(a%b>0) ans++;
	printf("%d", ans);
}
```

## step03-1_會考刷題 SOIT108 基礎題 11,12,13,13a

```cpp
//(SOIT108_Base_011) 基礎題：平面兩座標的面積 : 
//題目名稱：平面兩座標的面積 (題目修改) (BACIC) 
//題目內容：輸入平面兩點座標的四個整數值(x1,y1,x2,y2)，
//計算並顯示這兩點所圍之面積。
//(EX.輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積。) 
//數字範圍：整數1 –100  
#include <stdio.h>

int main()
{

	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int ans = (a-c)*(b-d);
	
	if(ans<0) ans = -ans;
	
	printf("%d", ans);
}
```

```cpp
//(SOIT108_Base_012) 基礎題：整數向量相加 :
//題目內容：輸入一個整數N，再依序讀入兩筆各有N個整數的向量，
//輸出此兩筆向量和。
//數字範圍：整數N範圍 1–10；其他整數1–100 Ex. 5 8 4 10 3 8 10 9 4 4 9
#include <stdio.h>
int main()
{
	int a[10];
	int b[10];

	int N;
	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%d", & a[i] );
	}

	for(int i=0; i<N; i++){
		scanf("%d", & b[i] );
	}

	for(int i=0; i<N; i++){
		printf("%d ", a[i] + b[i] );
	}
}
```

```cpp
//(SOIT108_Base_013) 基礎題：計算一組任意數目的整數的總和 :
//題目內容：輸入一組以0為結尾的任意數目的整數
//(其中只有最後一個整數可以為0)後計算所有輸入的正整數總和(負數不加進總和)。
//例如: 自鍵盤輸入 1 2 3 4 5 0 將會印出 15
//自鍵盤輸入 22 11 44 0 將會印出 77
//自鍵盤輸入 33 -2 9 4 55 0 會印出 101

#include <stdio.h>

int main()
{
	int ans = 0;
	while(1){
		int n;
		scanf("%d", &n);

		if(n==0) break;

		if(n>0) ans += n;
	}
	printf("%d", ans);
}
```

```cpp
//(SOIT108_Base_013A) 基礎題：整數最大值、最小值 :
//題目內容：請設計一個程式，該程式可自鍵盤輸入一個由數字所組成字串
//(註解：空白相隔及非0數字)，並由0結尾。
//例如: 1 2 3 4 5 0 或 23 -31 15 8 0 //請在程式中設計一個名為Func的函數(方法)，
//該函數可接受一個如上述的字串並將該字串中所有的整數由小而大重新排列
//並印出如下所述的結果[最小值,最大值] 
//當自鍵盤輸入 1 5 4 3 2 0時，會印出 [1,5] 
//當自鍵盤輸入23 -31 15 8 0時，會印出 [-31,23]  

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int max=n, min=n;

	while(1){
		scanf("%d", &n);
		if(n==0) break;
		if(n>max) max = n;
		if(n<min) min = n;
	}
	printf("[%d,%d]", min, max);
}
```

## step03-2_Git上傳

- cd desktop
- git clone https://github.com/.../2022cce
- cd 2022cce
- start .

以上可開檔案總管, 以下是把修改,加入帳冊

- git status
- git add .
- git status

以下要確認修改
- git config --global user.email jsyeh@gmail.com
- git config --global username jsyeh
- git commit -m week15

最後,推送上雲端
- git push

# Week16

## step01-0_考試,考前複習、考後講解

```cpp
///(SOIT108_Base_001) 基礎題：找千位數 :
///讀入 1000 - 100000 的數字，找出其千位數的數字

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", n/1000  %10 );
}
```

```cpp
///SOIT108_Base_003) 基礎題：正整數平方總和 :
///題目內容：輸入正整數n，可計算：1*1+2*2+...+n*n
///之總和的結果。數字範圍：整數1~1000
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);


	int ans = 0;
	for(int i=1; i<=n; i++){
		ans += i*i;
	}
	printf("%d", ans);
}
```

```cpp
///(SOIT108_Base_003A) 進階題：兩數之間的3倍數總和 :
///題目內容：請輸入兩個由小到大的正整數(起始數字與終止數字)，
///可計算出【起始數字】到【中止數字】間所有3的倍數之總和。
///{ex. 3 9 => 3+6+9=18} 數字範圍：整數1~1000

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);


	int ans = 0;
	for(int i=a; i<=b; i++){
		if(i%3==0) ans += i;
	}
	printf("%d", ans);
}
```

```cpp
///(SOIT108_Base_004) 基礎題：判斷座標的象限 :
///題目內容：判斷所輸入座標(x,y)的所在象限，
///(僅考慮在四個象限的情況，不考慮在軸線及原點的情況)。
///{ex.(1,1)屬第一象限、(-1,1)屬第二象限、
///(-1,-1)屬第三象限、(1,-1)屬第四象限} 數字範圍：整數 -1000~1000

#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);

	if( x>0 && y>0 ) printf("1\n");
	if( x<0 && y>0 ) printf("2\n");
	if( x<0 && y<0 ) printf("3\n");
	if( x>0 && y<0 ) printf("4\n");
}
```

```cpp
//(SOIT108_Base_005) 基礎題：輸入n (n>0)， 求n之所有因數和 :
//輸入n (n>0)， 求 n之所有因數和。
//{ex. 2之因數為1、2，因數和為因數加總1+2=3}
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);


	int ans = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0) ans += i;
	}
	printf("%d", ans);
}
```

```cpp
//(SOIT108_Base_007) 基礎題：把數字倒著印出來 :
//題目內容：輸入10個整數，把這10個數字倒著印出來。
//數字範圍：整數1 – 100
#include <stdio.h>
int main()
{
	int a[10];

	for(int i=0; i<10; i++){
		scanf("%d", &a[i] );
	}

	for(int i=10-1; i>=0; i--){
		printf("%d ", a[i] );
	}
}
```

```cpp
//(SOIT108_Base_010) 基礎題：水杯接水 :
//題目內容：有一桶水要分裝到杯子中，水桶中的水有N毫升，
//杯子的容量為M毫升，請問至少需要幾個杯子才能承接水桶裡的水。
//現在輸入N與M，請輸出答案。數字範圍：N為1 – 9999，M為1 –99
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int ans = a/b;
	if(a%b>0) ans++;
	printf("%d", ans);
}
```

```cpp
//(SOIT108_Base_011) 基礎題：平面兩座標的面積 : 
題目名稱：平面兩座標的面積 (題目修改) (BACIC) 題目內容：輸入平面兩點座標的四個整數值(x1,y1,x2,y2)，計算並顯示這兩點所圍之面積。(EX.輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積。) 數字範圍：整數1 –100  
#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	int ans = (a-c) * (b-d);
	if(ans<0) ans = -ans;
	
	printf("%d", ans);
}
```


## step01-1_LeetCode 705

```cpp
//LeetCode 705 Design HashSet
class MyHashSet {
public:
    int a[1000001]; //這題用陣列吧!
    MyHashSet() {
        for(int i=0; i<=1000000; i++){
            a[i] = 0; //沒有在裡面,空白
        }//其實可以在 int a[1000001]={};來設成0
    }

    void add(int key) {
        a[key] = 1; //在裡面
    }

    void remove(int key) {
        a[key] = 0; //不在裡面
    }

    bool contains(int key) {
        if(a[key]==1) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
```


## step02-1_會考刷題SOIT107進階題1,2,3,4

```cpp
///(SOIT107_ADVANCE_001_C) 進階題：判斷大小 :
///寫一方法能傳入2個整數，如果第一個數字比第二個數字小，則回傳-1;
///如果兩個數字相等，則回傳0; 如果第一個數字比第二個數字大，則回傳1。
///印出比較後的結果。
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;
	if(a==b) return 0;
	if(a>b) return +1;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```

```cpp
//(SOIT107_ADVANCE_002) 進階題：陣列全距 :
//寫一陣列大小為6，依序輸入陣列元素，
//計算陣列元素最大值與最小值的差距 
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0; i<6; i++){
		scanf("%d", &a[i] );
	}
	
	int max = a[0], min = a[0];
	
	for(int i=0; i<6; i++){
		if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
	}
	
	
	printf("%d", max - min);
}
```


```cpp
/// (SOIT107_ADVANCE_003) 進階題：
///計算一列整數的總和 :
///請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。

#include <stdio.h>
int main()
{
	int ans = 0;
	while(1){
		printf("Enter an integer ( 999 to end ): \n");
		int temp;
		scanf("%d", &temp);
		if(temp==999) break;

		ans += temp;
	}

	printf("The total is: ");
	printf("%d", ans);
}
```

```cpp
///(SOIT107_ADVANCE_004) 進階題：最大公因數gcd :
//輸入二整數 a b，輸出a b最大公因數

#include <stdio.h>
int gcd(int a, int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b, a%b);
}

int main()
{
	printf("Enter two integers: \n");
	int a, b;
	scanf("%d%d", &a, &b);


printf("The greatest common divisor of %d and %d is ", a, b);
	int ans = gcd(a,b);
	printf("%d\n", ans);
}
```

## step02-2_會考刷題SOIT107進階題5,6,7,8

```cpp
//(SOIT107_ADVANCE_005) 進階題：字串長度 : 
//輸入兩個很大的正整數a與 b，如果a>b則輸出 1，
//如果 a<b則輸出 -1, 如果 a=b 則輸出 0。 
//(暗示：可用字串輸入，用字串的觀點來比大小。) 
#include <stdio.h>
#include <string.h>
int main()
{
	char a[200], b[200];
	scanf("%s %s", &a, &b);
	
	int N1 = strlen(a);
	int N2 = strlen(b);
	
	if(N1>N2){
		printf("1");
		return 0;
	}else if(N1<N2){
		printf("-1");
		return 0;
	}
	//if N1 == N2, need to one-by-one
	for(int i=0; i<N1; i++){
		if(a[i]>b[i]){
			printf("1");
			return 0;
		}else if(a[i]<b[i]){
			printf("-1");
			return 0;
		}
	}
	printf("0");
	return 0;
}
```

```cpp
//(SOIT107_ADVANCE_006) 進階題：除惡務盡 : 
//輸入一個字串，將所有字元2去除後輸出。 
#include <stdio.h>
int main()
{
	char c;
	while( scanf("%c", &c) == 1 ){

		if(c!='2') printf("%c", c);
	}

}
```

```cpp
//(SOIT107_ADVANCE_007) 進階題：擲骰統計 :
//輸入一字串為擲骰的結果，統計1到6點出現的狀況。
#include <stdio.h>
int main()
{
	int a[10] = { };

	char c;
	while( scanf("%c", &c)==1 ){
		a[c-'0']++;
		/*
		if(c=='1') a[1]++;
		if(c=='2') a[2]++;
		if(c=='3') a[3]++;
		if(c=='4') a[4]++;
		if(c=='5') a[5]++;
		if(c=='6') a[6]++;*/
	}

	for(int i=1; i<=6; i++){
		printf("%d:%d\n", i, a[i] );
	}
}
```

```cpp
//(SOIT107_ADVANCE_008_C_C++) 進階題：函數判斷質數 :
//設計一個函數prime(n)，可以判斷n是否為質數：
//如果是質數則回傳1，否則回傳0。 
#include <iostream>
using namespace std;
int prime(int n)
{
	int bad=0;
	for(int i=2; i<n; i++){
		if(n%i==0) bad=1;
	}

	if(bad==0) return 1;
	else return 0;
}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```


##  step03-1_會考刷題SOIT107進階題10,11, SOIT107進階題8,9

```cpp
//(SOIT107_ADVANCE_010) 進階題：判斷迴文 :
//讀入一個至多80個字的字串，判斷字串是否為迴文
//(即由左而右，由右而左，順序相同，大小寫字母視為相異)。
//如果是迴文則輸出YES，如果不是則輸出NO。
#include <stdio.h>
#include <string.h>

int main()
{
	char line[200];
	scanf("%s", line);

	int N = strlen(line);

	int bad = 0;
	for(int i=0; i<N; i++){
		if(line[i] != line[N-1-i]) bad=1;
	}


	if(bad==1) printf("NO");
	else printf("YES");
}
```

```cpp
// (SOIT107_ADVANCE_011) 進階題：字串中的數字個數 :
//讀入一個至多80個字的字串，找出字串中有多少個數字。
#include <stdio.h>
#include <string.h>

int main()
{
	char line[200];
	scanf("%s", line);

	int N = strlen(line);

	int ans = 0;
	for(int i=0; i<N; i++){
		if(line[i]>='0' && line[i]<='9') ans++;
	}

	printf("%d\n", ans);
}
```

```cpp
//(SOIT108_Advance_008) 進階題：10數排序，
//從大到小排好 : 題目內容：輸入10個數字，
//把它們從大到小排好。數字範圍：整數1 – 100。
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i] );
	}

	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if( a[i] < a[j] ){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0; i<10; i++){
		printf("%d ", a[i] );
	}
}
```

```cpp
//(SOIT108_Advance_009) 進階題：奇數反流 :
//題目內容：輸入一個整數N，後接N個整數。
//請將這N個數中的奇數，依照出現順序反向印出。
//數字範圍：N與整數的範圍 為 1 – 99。
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);

	int a[100];
	for(int i=0; i<N; i++){
		scanf("%d", &a[i] );
	}


	for(int i=N-1; i>=0; i--){
		if(a[i]%2==1) printf("%d ", a[i] );
	}
}
```


## step03-2_會考刷題SOIT108進階題9b, 10, 11

```cpp
//(SOIT108_Advance_009B) 基礎題：大位王 :
//題目內容：輸入一個整數，輸出該整數的最大位的數字。
//例如：-357的最大位數字為3、1578的最大位數字為1，而0的最大位數字為0。
//數字範圍：整數 9999 ~ -9999
#include <stdio.h>
int main()
{
	char c;

	while( scanf("%c", &c)==1 ){
		if(c>='0' && c<='9'){
			printf("%c\n", c);
			break;
		}
	}
}
```

```cpp
//(SOIT108_Advance_009B) 基礎題：大位王 :
//題目內容：輸入一個整數，輸出該整數的最大位的數字。
//例如：-357的最大位數字為3、1578的最大位數字為1，而0的最大位數字為0。
//數字範圍：整數 9999 ~ -9999
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n<0) n = -n;

	while(n>10){
		n = n/10;
	}
	printf("%d\n", n);
}
```


```cpp
//(SOIT108_Advance_010) 進階題：億萬富翁 :
//題目內容：有一個富翁的財產超過一萬億，
//所以常常搞不清楚財產到底有多少，現在輸入一個整數N表示富翁的財產總額，
//請您幫他在財產總額上，從後方每三位加一個逗號，方便閱讀。
//數字範圍：整數N範圍 為 1000000000000 – 999000000000000。
#include <stdio.h>
#include <string.h>
int main()
{
	char line[200];
	scanf("%s", line);
	int N = strlen(line);

	for(int i=0; i<N; i++){
		printf("%c", line[i] );

		if((N-1-i)%3==0 && (N-1-i)!=0 ) printf(",");
	}
}
```


```cpp
//(SOIT108_Advance_011) 進階題：秒數換算 :
//題目內容：輸入總秒數(介於0~80000 之間的整數)，
//將其轉換成時:分:秒格式。數字範圍：秒數範圍0~80000

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ss = n%60;
	int mm = n/60%60;
	int hh = n/60/60;

	printf("%02d:%02d:%02d", hh, mm, ss);
}
```

# Week17

程式設計二 2023-06-06 Week17
1. LeetCode學習計畫的故事
2. LeetCode挑戰 1502等差級數 昨天1232點在直線上
3. 互動程式設計 (愛心)
4. 自製一些小遊戲

## step01-1_LeetCode 每日挑戰題 1502 等差級數。先把陣列排序, 再用 for迴圈兩兩比較, diff 差距不同就 失敗。請在 LeetCode完成, 截圖上傳 week17-1.png (程式碼則是存成 week17-1.cpp 等下上傳 GitHub)

```cpp
///LeetCode 1502 等差級數, 不過一開始陣列裡的數字是亂的
bool canMakeArithmeticProgression(int* arr, int arrSize){
    //1 排序
    //笨方法
    for(int i=0; i<arrSize; i++){
        for(int j=i+1; j<arrSize; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //2 逐一相減 a[i] - a[i-1] 都要相同 Yes
    //   不相同, 直接就 No
    int diff = arr[1] - arr[0];
    for(int i = 1;  i<arrSize; i++){
        if(arr[i] - arr[i-1] != diff) return false;
    }
    return true;
}
```

```cpp
///LeetCode 1502 等差級數, 不過一開始陣列裡的數字是亂的
int comp(const void*p1, const void *p2){
    return *(int*)p1 - *(int*)p2;
}
bool canMakeArithmeticProgression(int* arr, int arrSize){
    //1 排序
    qsort(arr, arrSize, sizeof(int), comp);

    //2 逐一相減 a[i] - a[i-1] 都要相同 Yes
    //   不相同, 直接就 No
    int diff = arr[1] - arr[0];
    for(int i = 1;  i<arrSize; i++){
        if(arr[i] - arr[i-1] != diff) return false;
    }
    return true;
}
```

```cpp
///LeetCode 1502 等差級數, 不過一開始陣列裡的數字是亂的
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort( arr.begin(), arr.end() );

        int diff = arr[1] - arr[0];
        for(int i = 1; i < arr.size() ; i++){
            if( arr[i] - arr[i-1] != diff ) return false;
        }
        return true;
    }
};
```

## step01-2_LeetCode 昨天的挑戰題 1232 座標連成一條線。其實就是看每一個部分的斜率是否相同。先把 點1 - 點0的斜率準備好, 再看 點i - 點0的斜率 是否與前面準備的相同。不相同就失敗。不過呢, 斜線的除法,如果 diff x 是0 就會當機, 可以移項變號,讓除法變成對面的乘法。截圖上傳 week17-2.png (程式碼則是存成 week17-2.cpp 等下上傳 GitHub)

```cpp
//LeetCode 1232 全部的點是否在同一條線上
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];

        for(int i=2; i<coordinates.size(); i++){
            int xi = coordinates[i][0], yi = coordinates[i][1];
            //(y1-y0)/(x1-x0) == (yi-y0)/(xi-x0) 斜率要相等
            //但擔心分母是0, 所以移項變號
            //(y1-y0)*(xi-x0) == (yi-y0)*(x1-x0) 
            if( (y1-y0)*(xi-x0) != (yi-y0)*(x1-x0) ) return false;
        }
        return true;
    }
};
```

## step02_互動程式設計, 最後要寫出愛心

## week17_1_heart

先看一下 week01 的那個愛心的程式碼, 是今天的小目標, 要把愛心畫出來, 同時可以蓋章互動, 畫出很多愛心

```processing
//week01 畫愛心的程式
//File-Preference, Font:36
size(400,400); //大小
fill(255,0,0); //Red 填充顏色
noStroke(); //不要畫外框
//ellipse(50,50,100,100); //把實驗的圓刪掉
for(int y=0; y<400; y++){
  for(int x=0; x<400; x++){
    float x2 = (x-200)/100.0; //0...400 => -2..+2
    float y2 = (200-y)/100.0; //0...400 => +2..-2
    float left = x2*x2 + y2*y2 - 1;
    if(left*left*left - x2*x2 * y2*y2*y2 < 0){
      ellipse(x,y,2,2);
    }
  }
}
```

```processing
//File-Preference, 字型 24 (放大一些)
size(400,400);
fill(255,0,0);
ellipse(200,200,300,300);
```

## week17_2_heart

```processing
size(400, 400);
fill(255, 0, 0);
noStroke();

for(int y=0; y<400; y++){
  for(int x=0; x<400; x++){
    ellipse(x, y, 2, 2);
  }
}
```

## week17_3_heart_ok

```processing
size(400, 400);
fill(255, 0, 0);
noStroke();

for(int y=0; y<400; y++){
  for(int x=0; x<400; x++){
    float a = (x-200)/100.0;
    float b = (200-y)/100.0;
    float c = a*a + b*b - 1;
    if(c*c*c - a*a*b*b*b < 0) ellipse(x, y, 2, 2);
  }
}
```

## week17_4_heart_setup_draw

```processing
void setup(){
  size(400, 400);
  fill(255, 0, 0);
  noStroke();
}
void draw(){
  
}
void mousePressed(){
  for(int y=0; y<400; y++){
    for(int x=0; x<400; x++){
      float a = (x-200)/30.0;
      float b = (200-y)/30.0;
      float c = a*a + b*b - 1;
      if(c*c*c - a*a*b*b*b < 0){
        ellipse(x+mouseX-200, y+mouseY-200, 2, 2);
      }
    }
  }
}
```

## 接下來是想做出陳俊太老師的大轉輪, 勇於嘗試

https://www.facebook.com/jiuntaichen/videos/10108133831488382

## week17_5_wheel_arc

```processing
size(400,400);
arc(200,200, 300,300, 0, radians(45), PIE);
```


## week17_6_wheel_for_24_fill


```processing
size(400,400);
for(int i=0; i<24; i++){
  float a = radians(360/24);
  if(i==0) fill(#FF7E05); //橘,中獎
  else if(i%3==0) fill(#000000);//黑
  else if(i%3==1) fill(#FAE3A9);//淡黃
  else fill(#FFFFFF);
  arc(200,200, 300,300, a*i, a*(i+1), PIE);
}
```

## week17_7_wheel_setup_draw_mouseDragged

```processing
void setup(){
  size(400,400);
}
void draw(){
  background(#FFFFF2);
  for(int i=0; i<24; i++){
    float a = radians(360/24);
    if(i==0) fill(#FF7E05); //橘,中獎
    else if(i%3==0) fill(#000000);//黑
    else if(i%3==1) fill(#FAE3A9);//淡黃
    else fill(#FFFFFF);
    arc(200,200, 300,300, d + a*i, d + a*(i+1), PIE);
  }
}
float d = 0;
void mouseDragged(){
  d = mouseX;
}
```

## week17_8_wheel_lucky_mousePressed_mouseReleased_v


```processing
void setup(){
  size(400,400);
}
void draw(){
  background(#FFFFF2);
  for(int i=0; i<24; i++){
    float a = radians(360/24);
    if(i==0) fill(#FF7E05); //橘,中獎
    else if(i%3==0) fill(#000000);//黑
    else if(i%3==1) fill(#FAE3A9);//淡黃
    else fill(#FFFFFF);
    arc(200,200, 300,300, d + a*i, d + a*(i+1), PIE);
  }
  d -= v;
  v *= 0.9;
}
float d = 0, v = 0, oldX;
void mousePressed(){
  oldX = mouseX;//記得在哪裡按下去
}
void mouseDragged(){
  d += radians(mouseX-pmouseX);
}
void mouseReleased(){ //放開時,要自己轉,有速度
  v = radians(mouseX - oldX);
}
```