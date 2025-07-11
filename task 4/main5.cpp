#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 2) return n;
    int first = 1, second = 2;
    for (int i = 3; i <= n; ++i) {
        int third = first + second;
        first = second;
        second = third;
    }
    return second;
}

int main() {
    cout << climbStairs(2) << endl;
    cout << climbStairs(3) << endl;
    cout << climbStairs(5) << endl;
    return 0;
}
