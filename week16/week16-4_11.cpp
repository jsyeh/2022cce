// (SOIT107_ADVANCE_011) �i���D�G�r�ꤤ���Ʀr�Ӽ� :
//Ū�J�@�Ӧܦh80�Ӧr���r��A��X�r�ꤤ���h�֭ӼƦr�C
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
