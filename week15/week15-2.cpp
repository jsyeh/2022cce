//LeetCode 703 Kth Largest Element in a Stream
//��έ�n�X�Ϊ� priority_queue �ӧ�� �̤j��k�ӼƸ̭�,�̤p����(�]�N�O��k�j����)
class KthLargest {
public:
    //���D,�n���k�j���Ʀr
    int k2;
    //vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;//�ƥ��@�Uk
        for(int i=0; i<nums.size(); i++){
            all.push( nums[i] );
            if(all.size()>k2) all.pop(); //�W�L�ƶq,�N��
        }//�ƥ��n�������Ʀr
    }

    int add(int val) {
        all.push(val);
        if(all.size()>k2) all.pop(); //�W�L�ƶq,�N��
        //sort(all.begin(), all.end()); //�q�p��j�Ʀn(����S���Ĳv)
        //�̥X��k�j���Ʀr (�ڭ̰O�� k2)
        return all.top(); //return all[ all.size() - k2 ];//return all[k2];����,�]��all�O�p��j,�ڭ̭n�j��p
    }
};
