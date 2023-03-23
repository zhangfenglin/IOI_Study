#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    float n, m;
    cin >> n >> m;
    const float discount = 0.8;

    float result = n - m * discount;

    printf("%.2f", result);

    return 0;
}
