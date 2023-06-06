//LeetCode 1232 全部的點是否在同一條線上
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];

        for(int i=2; i<coordinates.size(); i++){
            int xi = coordinates[i][0], yi = coordinates[i][1];
            //(y1-y0)/(x1-x0) == (yi-y0)/(xi-x0) 斜率要相等
            //但擔心分母是0, 所以移項變號
            //(y1-y0)*(xi-x0) == (yi-y0)*(x1-x0)
            if( (y1-y0)*(xi-x0) != (yi-y0)*(x1-x0) ) return false;
        }
        return true;
    }
};

