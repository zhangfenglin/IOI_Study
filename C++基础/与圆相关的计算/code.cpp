#include <cstdio>
#include <iostream>
#include <assert.h>

using namespace std;

#define PI 3.14159

int main() {
    double r;
    cin >> r;

    assert(r > 0 && r <= 10000);
    double d = 2 * r;
    double c = 2 * PI * r;
    double s = PI * r * r;

    printf("%.4f %.4f %.4f", d, c, s);

    return 0;
}
