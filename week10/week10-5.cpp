//LeetCode 1480. Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //Study Plan �� LeetCode 75 �� Day 1 �� 1480. Running Sum of 1d Array
        //�q1�}�l,�]���n�ݫe�@�� nums[i-1]
        for(int i=1; i<nums.size() ; i++){
            nums[i] = nums[i] + nums[i-1];
            //�C�@��,�N�O��e�@��,�[�i��
        }
        return nums;
    }
};

