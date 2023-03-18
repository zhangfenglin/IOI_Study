#include <iostream>

using namespace std;

int main() {
    int s1, s2, s3;
    s1 = 15 * 20; // 15 头牛吃 20 天
    s2 = 20 * 10; // 20 头牛吃 10 天

    s3 = (s1 - s2) / (20 - 10);  // 每天牧草的产量

    cout << s3;
    
    return 0;
}