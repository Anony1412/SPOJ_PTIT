#include <iostream>

using namespace std;

long long GCD(long long numberOne, long long numberTwo) {
    while (numberOne % numberTwo != 0) {
        int remainder = numberOne % numberTwo;
        numberOne = numberTwo;
        numberTwo = remainder;
    }
    return numberTwo;
}

long long LCM(long long numberOne, long long numberTwo, long long gcd) {
    return numberOne * numberTwo / gcd;
}

int main() {
    while (true) {
        long long numberOne, numberTwo;
        cin >> numberOne >> numberTwo;
        if (numberOne == 0 && numberTwo == 0) return 0;
        long long gcd = GCD(numberOne, numberTwo);
        cout << gcd << " " << LCM(numberOne, numberTwo, gcd) << endl;
    }
}