#include<iostream>
using namespace std;
int main() {
	int x, y, z, n;
	int a = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		if ((x + y + z) >= 2) {
				a++;
		}
	}
	cout << a;
	return 0;
}
