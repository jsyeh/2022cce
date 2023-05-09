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