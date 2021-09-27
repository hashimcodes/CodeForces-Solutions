#include <iostream>
#include <string>
using namespace std;
int main() {
	char n;
	string a;
	cin >> a;
	n = a[0];
	n = toupper(n);
	cout << n;
	for (int i = 1; i < a.length(); i++) {
		cout << a[i];
	}
	return 0;
}
