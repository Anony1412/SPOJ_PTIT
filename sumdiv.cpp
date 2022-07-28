#include <iostream>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (long long i = 2; i*i <= n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}

void sumdiv(long long n) {
    if (n < 2) {
        cout << n << endl;
        return; 
    }
    long long result = n+1;
    if (!isPrime(n)) {
        for (long long i = 2; i*i <= n; i++) {
            if (i*i == n) {
                result += i;
            } else if (n%i == 0) {
                result += i + n/i;
            }
        }
    }
    cout << result << endl;
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        sumdiv(n);
    }
}