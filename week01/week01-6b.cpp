///week01-6.cpp
///Step03-2 ��� '2' ����, �n ans++
//
#include <stdio.h>
#include <string.h>
int main()
{
	char line[30];
	int total=0;
	while( scanf("%s", line)==1){
		int N = strlen(line);

		int ans=0; //�j��e�� ans=0
		for(int i=0; i<N; i++){
			if( line[i]=='2' ) ans++;
		} //�j�餤�� ans++
		printf("%d\n", ans);
		//�j��᭱,��ans�L�X��
		total += ans;
	}
	printf("Total: %d\n", total);
}
