#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;
const double PI = acos(-1.0);

int main() {

    float r;
    cin >> r;

    float dia = 2 * r;
    float perimeter =  2 * PI * r;
    float size = PI * r * r;

    printf("%.4f %.4f %.4f", dia, perimeter, size);

    return 0;
}
