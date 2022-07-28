#include <iostream>

using namespace std;

void factorAnalysis(int n) {
    int i = 2;
    int index = 0;
    bool check = false;
    while (n > 1) {
        if (n % i == 0) {
            index++;
            n /= i;
            check = true;
        }
        else {
            if (check) {
                cout << i << " " << index << endl;
                index = 0;
                check = false;
            }
            i++;
        }
    }
    if (check) {
        cout << i << " " << index << endl;
    }
}

	
bool isPrime(int n) {
	for (int i = 2; i*i <= n; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << n << " " << 1 << endl;
    } else {
        factorAnalysis(n);
    } 
}