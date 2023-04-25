#include <stdio.h>
#include <string.h> //strlen()
int main()
{
	char line1[20];
	char line2[20];
	scanf("%s%s", line1, line2);
	int N1=strlen(line1);
	int N2=strlen(line2);
	for(int i=0; i<10; i++){
		if(i<N1) printf("%c", line1[i] );
		if(i<N2) printf("%c", line2[i] );
	}

}
