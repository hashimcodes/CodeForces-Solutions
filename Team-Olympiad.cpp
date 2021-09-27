#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n, t[5000], x[5001], y[5001], z[5001];
	int a = 0, b = 0, c = 0;
	int h = 1, l = 1, f = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
		if (t[i] == 1) {
			a++;
			x[h] = i;
			h++;
		}
		else if (t[i] == 2) {
			b++;
			y[l] = i;
			l++;
		}
		else if (t[i] == 3) {
			c++;
			z[f] = i;
			f++;
		}
	}
	int least = min(a, b);
	int largNum = min(least, c);
	cout << largNum << endl;
	for (int i = 1; i <= largNum; i++) {
		
			cout << x[i] << " " << y[i] << " " << z[i] << endl;
	}
		
	return 0;
}
