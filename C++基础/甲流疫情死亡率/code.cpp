#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int x, y;   // x 为确诊数，y 为死亡数
    cin >> x >> y;

    float z =  ((float)y / (float)x) * 100.0;   // 由于要用百分号展示，所以要乘以 100.0
    printf("%.3f%%", z);    // 此处输出百分号使用两个百分号。

    return 0;
}
