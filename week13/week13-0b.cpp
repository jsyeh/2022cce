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

