#include "iostream"
using namespace std;
int main() {
	int x[100000], n, count = 0, temp = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (x[i] > 0)
			temp = temp + x[i];
		else if (x[i] == -1 && temp + x[i] < 0)
			count++;
		else temp--;
	}
	cout << count;
	return 0;
}
