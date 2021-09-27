#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	cin >> a;
	int count = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 65 && a[i] <= 92) {
			count++;
		}
	}
	if (count > (a.length() - count)) {
		for (int i = 0; i <= a.length(); i++) {
			if (a[i] >= 97 && a[i] <= 122) {
				a[i] = a[i] - 32;
			}
		}
	}
	else {	
		for (int i = 0; i <= a.length(); i++) {
			if (a[i] >= 65 && a[i] <= 92) {
				a[i] = a[i] + 32;
			}
		}
	}
	cout << a << endl;
 
	return 0;
}
