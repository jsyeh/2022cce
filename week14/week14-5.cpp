//LeetCode 217 �}�C��, ���S���u�ۦP�B���Сv
int comp(const void*p1, const void*p2){
    return *(int*)p1 - *(int*)p2;
}
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);
    //���Ʀn, �ۦP���N�|��F�~
    for(int i=0; i<numsSize-1; i++){
        if(nums[i]==nums[i+1]) return true;
    }//�p�G�۾F���O�ۦP��, �N���F!!!

    return false;//�S�����ۦP��
}
/*
    �ɤO���,�|�W�L�ɶ�, �]�� 10�U*10�U=100����
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]==nums[j]) return true;
        }
    }
    return false;
*/
