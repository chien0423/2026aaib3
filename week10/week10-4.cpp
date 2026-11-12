// week10-4.cpp 學習計畫
// LeetCode 43. Multiply Strings
// 很大很大的數, 用字串模擬, 進行乘法
class Solution {
public:
    vector<int> myStrVec(string num) {
        vector<int> ans;
        for (int i = 0; i < num.size(); i++) {
            ans.push_back(num[i] - '0'); // 將字元轉成數字存入陣列
        }
        return ans;
    }

    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        vector<int> a = myStrVec(num1) ; // 把字串, 變陣列
        vector<int> b = myStrVec(num2) ;

        int n = a.size();
        int m = b.size();
        vector<int> res(n + m, 0);

        // 從低位到高位進行直式乘法模擬
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = a[i] * b[j];
                int p1 = i + j, p2 = i + j + 1;

                int sum = mul + res[p2];
                res[p2] = sum % 10;          // 當前位數
                res[p1] += sum / 10;         // 進位加到高位
            }
        }

        // 將結果陣列轉回字串，並去除最前方的領頭零
        string ans = "";
        for (int p : res) {
            if (!(ans.empty() && p == 0)) {
                ans.push_back(p + '0');
            }
        }

        return ans.empty() ? "0" : ans;
    }
};
