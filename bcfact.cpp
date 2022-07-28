#include <iostream>

using namespace std;

void factorial(int n) {
    long long result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    cout << result << endl;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        factorial(n);
        cin >> n;
    }
}