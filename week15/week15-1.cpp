//LeetCode 703 Kth Largest Element in a Stream
//先用「沒效率/會超過時間TLE」的寫法 sort()
class KthLargest {
public:
    //本題,要找第k大的數字
    int k2;
    vector<int> all;
    KthLargest(int k, vector<int>& nums) {
        k2 = k;//備份一下k
        for(int i=0; i<nums.size(); i++){
            all.push_back( nums[i] );
        }//備份好全部的數字
    }

    int add(int val) {
        all.push_back(val);
        sort(all.begin(), all.end()); //從小到大排好(比較沒有效率)
        //最出第k大的數字 (我們記成 k2)
        return all[ all.size() - k2 ];//return all[k2];不行,因為all是小到大,我們要大到小
    }
};
