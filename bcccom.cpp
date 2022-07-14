#include <iostream>

using namespace std;

int compress(int number) {
    int result = 0;
    while (number > 0) {
        result += number % 10;
        number /= 10;
    }
    return result;
}

int main() {
    int t, number;
    cin >> t;
    while (t-- > 0) {
        cin >> number;
        int result = compress(number);
        while (result > 9) {
            result = compress(result);
        }
        cout << result << endl;
    }
}