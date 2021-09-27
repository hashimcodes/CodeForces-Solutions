#include "iostream"
using namespace std;
int main() {
	int count1 = 0, count2 = 0, n = 0;
	int s = 1, l = 0;
	cin >> n;
	int x[1000];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (x[l] > x[n - s]) {
				count1 = count1 + x[l];
				l++;
			}
			else {
				count1 = count1 + x[n - s];
				s++;
				
			}
		}
		else if (i % 2 != 0) {
			if (x[l] > x[n - s]) {
				count2 = count2 + x[l];
				l++;
			}
			else {
				count2 = count2 + x[n - s];
				s++;
				
			}
		}
	}
 
	cout << count1 << ' ' << count2 << '\n';
 
	return 0;
}
