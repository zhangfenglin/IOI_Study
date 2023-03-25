#include <cstdio>
#include <iostream>
#include <assert.h>

using namespace std;

int main() {
    double c, f;
    // C = 5x(F - 32) / 9
    cin >> f;

    assert(f >= -459.67);

    c = 5.0 * (f - 32) / 9.0;
    printf("%.5f", c);

    return 0;
}
