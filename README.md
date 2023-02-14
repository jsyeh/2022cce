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
