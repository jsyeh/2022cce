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
