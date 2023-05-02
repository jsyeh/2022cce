//(SOIT106_ADVANCE_004) 進階題：大小寫轉換 :
//讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換
//(大寫轉為小寫，小寫轉為大寫)後輸出。

#include <stdio.h>
int main()
{
	//char line[20];
	//scanf("%s", line);

	//char line[11];
	//scanf("%10s", line);


	char c;
	while( scanf("%c", &c) ==1 ){
		if(c>='a' && c<='z') c = c-'a'+'A';
		else if(c>='A' && c<='Z') c = c-'A'+'a';

		printf("%c", c);
	}


}
