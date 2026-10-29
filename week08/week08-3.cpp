// week08-3.cpp 學習計畫 Matrix 第3題 (正確版)
// LeetCode 54. Spiral Matrix 螺旋矩陣，繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 長、寬
        vector<int> ans;
        int left = 0, right = N - 1, up = 0, down = M - 1; // 四個變數

        while (left <= right && up <= down) {
            // 1. 最上面：由左往右
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[up][j]);
            }
            up++;

            // 2. 最右邊：由上往下
            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // 3. 最下面：由右往左（需檢查還有沒有列）
            if (up <= down) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[down][j]);
                }
                down--;
            }

            // 4. 最左邊：由下往上（需檢查還有沒有行）
            if (left <= right) {
                for (int i = down; i >= up; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
