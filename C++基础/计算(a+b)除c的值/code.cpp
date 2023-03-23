#include <cstdio>
#include <iostream>
#include <assert.h>

using namespace std;

int main() {
    // (a+b)×c
    // －10,000<a,b,c<10,000

    int a, b, c;
    cin >> a >> b >> c;
    assert(a < 10000 && a > -10000);
    assert(b < 10000 && b > -10000);
    assert(c < 10000 && c > -10000 && c != 0);

    cout << (a + b) / c;

    return 0;
}
