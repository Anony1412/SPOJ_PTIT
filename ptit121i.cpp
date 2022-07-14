#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, tIndex, r;
    // string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./:";
    string strInput;

    cin >> t;
    while (t-- > 0) {
        cin >> tIndex >> r >> strInput;
        cout << tIndex << " ";
        for (int i = 0; i < strInput.length(); i++) {
            for (int j = 0; j < r; j++) {
                cout << strInput[i];
            }
        }
        cout << endl;
    }
}