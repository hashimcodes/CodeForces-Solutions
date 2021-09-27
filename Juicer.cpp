#include <iostream>
using namespace std;
int main() {
	int n, a, b, d, count = 0, waste = 0;
	cin >> n >> b >> d;
 
	for (int i = 1; i <= n; i++) {
		cin >> a;
 
		if (a > b)
			continue;
		else {
			count += a;
 
			if (count > d) {
				waste += 1;
				count = 0;
			}
		}
	}
 
	cout << waste << endl;
 
	return 0;
}
