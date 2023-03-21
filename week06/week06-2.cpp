///Week06-2.cpp 解 LeetCode 的程式
///LeetCode 不是寫完整的程式, 只寫一個函式
///判斷迴文, 要用到的程式技巧: 使用 for迴圈, if判斷, while迴圈
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
///但是如果是真的可以跑的程式, 要有 int main()
#include <stdio.h>
int main()
{
    if( isPalindrome(123454321) ) printf("123454321 Yes\n");
    else printf("123454321 No\n");
    if( isPalindrome(1234567899) ) printf("1234567899 Yes\n");
    else printf("1234567899 No\n");
}
