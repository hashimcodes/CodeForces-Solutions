#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	for (int i = 0; i <= 100; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] + 32;
		}
		if (b[i] >= 'A' && b[i] <= 'Z') {
			b[i] = b[i] + 32;
		}
	}
	if (a == b) 
		cout << 0;
	else if (a > b) 
		cout << 1;
	else 
		cout << -1;
	return 0;
}
