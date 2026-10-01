/// week04-3.cpp 在 CodeBlocks 裡實作一下
#include <iostream>
#include <vector>
#include <algorithm> // Week04
using namespace std;
int main()
{
    vector<int> a; /// 上週 Week03 教的
    a.push_back(99);
    a.push_back(88);
    a.push_back(77); /// 上週 Week03 教的
    /// 請在 CodeBlocks 的 Settings-Compiler... 要勾第2個 -std=c++11
    for (int num : a) cout << num << ' '; /// 2011 年的 C++, 沒設好會出錯
    cout << "\n";
}
