#include <iostream>

using namespace std;

int main() {
    int n, arr[81];
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i > 0 && arr[i] != arr[i-1]) {
            result++;
        }
    }
    cout << result;
}