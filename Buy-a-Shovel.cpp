#include "iostream"
using namespace std;
int main() {
	int k, r;
	cin >> k >> r;
	for (int i = 1; i < 100; i++) {
		if (((i * k) - r) % 10 == 0 || (i * k) % 10 == 0) {
			cout << i;
			break;
		}
	}
	return 0;
}
