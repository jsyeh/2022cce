//LeetCode 217 陣列裡, 有沒有「相同、重覆」
int comp(const void*p1, const void*p2){
    return *(int*)p1 - *(int*)p2;
}
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);
    //先排好, 相同的就會當鄰居
    for(int i=0; i<numsSize-1; i++){
        if(nums[i]==nums[i+1]) return true;
    }//如果相鄰的是相同的, 就找到了!!!

    return false;//沒有找到相同的
}
/*
    暴力比對,會超過時間, 因為 10萬*10萬=100億次
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]==nums[j]) return true;
        }
    }
    return false;
*/
