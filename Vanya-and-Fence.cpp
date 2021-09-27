#include <iostream>
using namespace std;
int main() {
	int n = 0, h = 0, sum = 0, a = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a <= h)
			sum += 1;
		else if (a > h)
			sum += 2;
	}
 
	cout << sum << endl;
 
	return 0;
}
