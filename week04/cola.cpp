#include <stdio.h>
int main()
{
	int N; ///�@�}�l���X�~,�]�O�A��W���~��
	while( scanf("%d", &N)==1 ){
		int drinked = N; ///��W���X�~,����

		while(N>=3){///��W�٦�3�ӥH�W���~�l����
            ///�N�h�I��
            printf("�Ų~%d\n", N);

			int got = N/3; ///3�~��1�~,got
			N = N%3; ///��������ݾl���~�l
            printf("�Ų~%d, �o��%d\n", N, got);

			drinked += got; ///�ܷs��Cola
			N += got; ///��� got�쪺�ܧ�,�]����W

			printf("��W���Ų~:%d �ܤF�`��:%d\n", N, drinked);
		}

		if(N==2) drinked++; ///�n������,��W�٦�2�Ų~,�i�ɲ~+1
		printf("%d\n", drinked);
	}
}
