#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        printf("%8d ", a[i]);
    }
    
    return 0;
}
