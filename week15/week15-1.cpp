//LeetCode 703 Kth Largest Element in a Stream
//���Ρu�S�Ĳv/�|�W�L�ɶ�TLE�v���g�k sort()
class KthLargest {
public:
    //���D,�n���k�j���Ʀr
    int k2;
    vector<int> all;
    KthLargest(int k, vector<int>& nums) {
        k2 = k;//�ƥ��@�Uk
        for(int i=0; i<nums.size(); i++){
            all.push_back( nums[i] );
        }//�ƥ��n�������Ʀr
    }

    int add(int val) {
        all.push_back(val);
        sort(all.begin(), all.end()); //�q�p��j�Ʀn(����S���Ĳv)
        //�̥X��k�j���Ʀr (�ڭ̰O�� k2)
        return all[ all.size() - k2 ];//return all[k2];����,�]��all�O�p��j,�ڭ̭n�j��p
    }
};
