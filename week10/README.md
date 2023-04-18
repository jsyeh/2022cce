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



