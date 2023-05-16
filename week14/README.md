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
