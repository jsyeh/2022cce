//LeetCode 1480. Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //Study Plan 的 LeetCode 75 的 Day 1 的 1480. Running Sum of 1d Array
        //從1開始,因為要看前一格 nums[i-1]
        for(int i=1; i<nums.size() ; i++){
            nums[i] = nums[i] + nums[i-1];
            //每一格,就是把前一格,加進來
        }
        return nums;
    }
};

