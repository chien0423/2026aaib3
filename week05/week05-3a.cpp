// week05-3a.cpp 學習計畫 Built-in Functions 第1題
// LeetCode 58. Length of Last Word 最後那個字, 有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0;
        for (char c : s) {
            if (c == ' ') {
                if (now > 0) ans = now; // 只有當 now > 0 時才更新答案，避免被連續空格清成 0
                now = 0;
            } else {
                now++;
            }
        }
        if (now > 0) ans = now;
        return ans;
    }
};
