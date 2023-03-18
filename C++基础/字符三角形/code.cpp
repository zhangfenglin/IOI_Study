#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int h = 10;
    string space = " ";

    char c;
    cin >> c;

    for (int i = 0; i < h; i++) {
        for (int k = 0; k < h - i - 1; k++) {
            cout << space;
        }
        int count = 2 * i + 1;
        for (int j = 0; j < count; j++) {
            cout << c;
        }

        cout << endl;
    }
    return 0;
}
