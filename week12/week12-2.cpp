//LeetCode 1822. Sign of the Product of an Array �Q�ݭ��_�Ӫ����t��
int arraySign(int* nums, int numsSize){
    int ans = 0; //���X�� <0 ���t��?
    for(int i=0; i<numsSize; i++){
        if(nums[i] < 0) ans++;
        if(nums[i]==0) return 0;//���������o! 0�S�ϤF
    }
    if(ans%2==1) return -1;
    else return 1;
}
