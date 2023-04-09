#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float a, b, h, s;
    a = 15;
    h = 150 * 2 / a;
    b = 25;
    s = (a + b) * h / 2;
    
    printf("%.2f", s);
    
    return 0;
}