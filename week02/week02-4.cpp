// week02-4.cpp 學習計畫 Basic 第2題
// LeetCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {}; // 有 26 個回收桶, 裡面都是 0
        for (char c : s ) { // C++ 進階 for 迴圈寫法
            U[c-'a'] ++; // 把字母放到對應的桶子裡
        }
        for (char c : t ) {
            U[c-'a'] --;
            if ( U[c-'a'] < 0 ) return c;
        }
        return 0;
    }
};
