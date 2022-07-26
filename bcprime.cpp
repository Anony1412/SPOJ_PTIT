#include <iostream>

using namespace std;

string primeCheck(int n) {
    if (n < 2) {
        return "NO";
    } else {
        for (int i = 2; i*i <= n; i++) {
            if (n%i == 0) {
                return "NO";
            }
        }
    } 
    return "YES";
}

int main() {
    int n;
    cin >> n;
    cout << primeCheck(n);
}