#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    string str;
    cin >> t;
    while (t-- > 0) {
        cin >> str;
        bool isValid = true;
        for (int i = 0; i <= str.length() / 2; i++) {
            if (str[i] != str[str.length() - 1 - i]) {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
