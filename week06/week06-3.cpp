// week06-3.cpp 學習計畫 Simulation 第2題
// LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) { // week02: string
        int x = 0, y = 0;
        for ( char c : moves ) { // week02: C++ 進階for迴圈
            if (c=='U') y++; // 向上
            if (c=='D') y--; // 向下
            if (c=='L') x--; // 向左
            if (c=='R') x++; // 向右
        }
        if (x==0 && y==0) return true;
        else return false;
    }
};
