#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}

int sumdiv(int n) {
    if (n < 2) {
        return n; 
    }
    int result = n+1;
    if (!isPrime(n)) {
        for (int i = 2; i*i <= n; i++) {
            if (i*i == n) {
                result += i;
            } else if (n%i == 0) {
                result += i + n/i;
            }
        }
    }
    return result;
}

int main() {
    int l, r;
    cin >> l >> r;
    int result = 0;
    for (int i = l; i <= r; i++) {
        if (i < sumdiv(i) - i) {
            result++;
        } 
    }
    cout << result;
}