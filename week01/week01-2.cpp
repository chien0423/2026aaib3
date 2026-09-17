/// week01-2.cpp SOIT106 ADVANCE_001
/// C++ 版本，再多寫一些中文的註解
#include <iostream>  /// 使用 IO 流的外掛
using namespace std; /// 使用 std 命名空間

int main()
{
    int N;
    cin >> N; /// console input 到右邊的 N

    int b = N, ans = 0;

    while (N > 0) {
        ans = ans * 10 + N % 10;
        N = N / 10;
    }

    /// console output 依序送出去
    /// 下面有個錯的版本、3個正確的版本
    cout << b << ans << b + ans;  /// 錯！少了 + = 跟行
    cout << b << "+" << ans << "=" << b + ans << "\n"; /// 正確
}
