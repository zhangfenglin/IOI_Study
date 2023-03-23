#include <cassert>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    assert(b != 0);
    
    double c, d;
    c = (double)a;
    d = (double)b;

    double e = c / d;
    printf("%.9f", e);

    return 0;
}
