#include <bits/stdc++.h>
using namespace std;
 
int main() {
	while(1) {
		string s;
		cin >> s;
		if (s[0] == '#') {
			break;
		} else {
			long long countY = 0, countN = 0, countP = 0, countA = 0;
			for (long long i = 0; i < s.size(); i++) {
				if (s[i] == 'Y') {
					countY++;
				}
				if (s[i] == 'N') {
					countN++;
				}
				if (s[i] == 'P') {
					countP++;
				}
				if (s[i] == 'A') {
					countA++;
				}
			}	
			if (countA > s.size()/2 || (s.size() %2 == 0 && countA >= s.size()/2)) {
				cout << "need quorum" << endl;
			} else {
				if (countY > countN) {
					cout << "yes" << endl;
				} else if (countN > countY) {
					cout << "no" << endl;
				} else if (countY == countN) {
					cout << "tie" << endl;
				}	
			}	
		}
	}
	return 0;
}