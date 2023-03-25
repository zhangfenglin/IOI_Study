#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double r1, r2;
    cin >> r1 >> r2;
    
    double R = 1 / (1/r1 + 1/r2);
    printf("%.2f", R);
    return 0;
}
