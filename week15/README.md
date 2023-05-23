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
