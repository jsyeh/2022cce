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
