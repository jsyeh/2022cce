///1046. Last Stone Weight
int findMaxI(int* stones, int stonesSize){
    int maxI = 0;//左手拿石頭
    for(int i=0; i<stonesSize; i++){//for迴圈
        if(stones[i] > stones[maxI]){//if判斷 stones[i] > 手上拿的石頭
            maxI = i;
        }
    }    //以下程式,會重覆一直使用啊!!!!
    return maxI;
}
int lastStoneWeight(int* stones, int stonesSize){
    while(true){
        int i=findMaxI(stones, stonesSize);//最大石頭
        int a = stones[i];
        stones[i] = 0;
        int j=findMaxI(stones, stonesSize);//第二大石頭
        int b = stones[j];
        stones[j] = 0;
        printf("%d %d\n", a, b);
        if(a==0 && b==0) return 0;//最大石頭都是0,就是0,沒剩石頭
        if(a!=0 && b==0) return a;//只剩左手的那顆,答案

        if(a-b>0){//有剩下石頭
            stones[i] = a-b;
        }
    }
    return 0;
}
    /*int a = findMaxI(stones, stonesSize);
    printf("maxI: %d 對應石頭重:%d\n", a, stones[a]);///小技巧,可用 printf()印出數值,方便找問題
    stones[a] = 0;//石頭拿走,就沒有東西了哦!!!
    int b = findMaxI(stones, stonesSize);
    printf("maxI: %d 對應石頭重:%d\n", b, stones[b]);
    stones[b] = 0;
    int c = findMaxI(stones, stonesSize);
    printf("maxI: %d 對應石頭重:%d\n", c, stones[c]);
    stones[c] = 0;*/
