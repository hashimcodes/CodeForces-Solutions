#include<algorithm>
#include <iostream>
using namespace std;
int main() {
	int n, a[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int count = 0;
	for (int i = 1; i < n-1; i++) {
		if (a[i] > a[0] && a[i] < a[n - 1])
			count += 1;
	}
	cout << count << endl;
	return 0;
}
