//LeetCode 258 Add Digits
//再改用一個大的迴圈,來重覆做很多次
int addDigits(int num){
    while(num>=10){ //如果num是2位數以上, 繼續進行剝皮

        int ans = 0;
        while(num>0){//剝皮法
            ans += num % 10;//個位數
            num = num / 10; //數字變小了
        }
        num = ans; //最後答案放回 num 以便下一次再剝皮

    }

    return num;
}
