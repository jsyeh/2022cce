// (SOIT107_ADVANCE_011) 進階題：字串中的數字個數 :
//讀入一個至多80個字的字串，找出字串中有多少個數字。
#include <stdio.h>
#include <string.h>

int main()
{
	char line[200];
	scanf("%s", line);

	int N = strlen(line);

	int ans = 0;
	for(int i=0; i<N; i++){
		if(line[i]>='0' && line[i]<='9') ans++;
	}

	printf("%d\n", ans);
}
