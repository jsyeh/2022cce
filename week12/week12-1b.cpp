//LeetCode 258 Add Digits
//���β¤�k, ���а��ܦh��
int addDigits(int num){
    // 1,999,999,999
    int ans=0;
    while(num>0){ //��֪k
        ans += num % 10;//�Ӧ��
        num = num / 10; //�Ʀr�ܤp�F
    }
    num = ans; //���[�X11,�A���@����֪k
    //82

    ans = 0;
    while(num>0){
        ans += num % 10;
        num = num / 10;
    }
    num = ans;
    //10

    ans = 0;
    while(num>0){
        ans += num % 10;
        num = num / 10;
    }
    //1
    return ans;
}
