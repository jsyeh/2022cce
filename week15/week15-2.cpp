//LeetCode 703 Kth Largest Element in a Stream
//эノノ priority_queue ㄓт 程k计柑,程计(碞琌材k计)
class KthLargest {
public:
    //セ肈,璶т材k计
    int k2;
    //vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;//称k
        for(int i=0; i<nums.size(); i++){
            all.push( nums[i] );
            if(all.size()>k2) all.pop(); //禬筁计秖,碞メ
        }//称场计
    }

    int add(int val) {
        all.push(val);
        if(all.size()>k2) all.pop(); //禬筁计秖,碞メ
        //sort(all.begin(), all.end()); //眖逼(ゑ耕⊿Τ瞯)
        //程材k计 (и癘Θ k2)
        return all.top(); //return all[ all.size() - k2 ];//return all[k2];ぃ︽,all琌,и璶
    }
};
