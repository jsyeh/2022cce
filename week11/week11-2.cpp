///1046. Last Stone Weight
int findMaxI(int* stones, int stonesSize){
    int maxI = 0;//���⮳���Y
    for(int i=0; i<stonesSize; i++){//for�j��
        if(stones[i] > stones[maxI]){//if�P�_ stones[i] > ��W�������Y
            maxI = i;
        }
    }    //�H�U�{��,�|���Ф@���ϥΰ�!!!!
    return maxI;
}
int lastStoneWeight(int* stones, int stonesSize){
    while(true){
        int i=findMaxI(stones, stonesSize);//�̤j���Y
        int a = stones[i];
        stones[i] = 0;
        int j=findMaxI(stones, stonesSize);//�ĤG�j���Y
        int b = stones[j];
        stones[j] = 0;
        printf("%d %d\n", a, b);
        if(a==0 && b==0) return 0;//�̤j���Y���O0,�N�O0,�S�ѥ��Y
        if(a!=0 && b==0) return a;//�u�ѥ��⪺����,����

        if(a-b>0){//���ѤU���Y
            stones[i] = a-b;
        }
    }
    return 0;
}
    /*int a = findMaxI(stones, stonesSize);
    printf("maxI: %d �������Y��:%d\n", a, stones[a]);///�p�ޥ�,�i�� printf()�L�X�ƭ�,��K����D
    stones[a] = 0;//���Y����,�N�S���F��F�@!!!
    int b = findMaxI(stones, stonesSize);
    printf("maxI: %d �������Y��:%d\n", b, stones[b]);
    stones[b] = 0;
    int c = findMaxI(stones, stonesSize);
    printf("maxI: %d �������Y��:%d\n", c, stones[c]);
    stones[c] = 0;*/
