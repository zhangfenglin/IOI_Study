#include <cassert>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    assert(b != 0);

    int c = a / b;

    int d = a % b;

    printf("%d %d", c, d);

    return 0;
}
