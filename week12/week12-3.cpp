///LeetCode 191. Number of 1 Bits
int hammingWeight(uint32_t n) {
    int ans=0;
    while(n>0){ //�Ʀr�٨S�駹,�N�~��
        int now = n%2; //��@�h��
        if(now==1) ans++; //��U�Ӫ���,���X��1
        n = n / 2; //�Ʀr�S�ܧ�p�F
    }
    return ans;
}
