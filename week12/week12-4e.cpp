//(SOIT106_ADVANCE_005_C) 進階題：A的B次方函數
//題目名稱：A的B次方函數
//題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
//數字範圍：整數 1 – 9。
//程式限制：不得使用power()函數。不得變更已給定的主程式。

#include <stdio.h>

int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=0; i<b; i++){
		ans = ans * a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
