#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int head, foot;
    cin >> head >> foot;

    int x, y; // x 只鸡，y 只兔子
    // x + y = head;
    // 2x + 4y = foot;
    // 2x + 2y = 2 * head;
    // 2y = foot - 2 * head;
    y = (foot - 2 * head) / 2;
    x = head - y;

    cout << x << " " << y;

    return 0;
}
