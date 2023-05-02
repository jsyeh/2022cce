//LeetCode 258 Add Digits
//先用笨方法, 重覆做很多次
int addDigits(int num){
    // 1,999,999,999
    int ans=0;
    while(num>0){ //剝皮法
        ans += num % 10;//個位數
        num = num / 10; //數字變小了
    }
    num = ans; //剛剛加出11,再做一次剝皮法
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
