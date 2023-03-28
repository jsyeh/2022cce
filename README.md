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
