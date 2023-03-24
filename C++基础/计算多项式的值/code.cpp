#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double x, a, b, c, d;

    cin >> x >> a >> b >> c >> d;

    if (x < -100 || x > 100) {
        return 1;
    }
    
    if (a < -100 || a > 100) {
        return 1;
    }

    if (b < -100 || b > 100) {
        return 1;
    }

    if (c < -100 || c > 100) {
        return 1;
    }


    if (d < -100 || d > 100) {
        return 1;
    }

    double f_x = a * (x * x * x) + b * (x * x) + c * x + d;
    printf("%.7f", f_x);

    return 0;
}
