#include <iostream>
using namespace std;
int main(){
	int a = 0, x, t;
	double n, k, d;
	double b;
	cin >> n >> t >> k >> d;
	
	b = (n * t) / k;
 
	for (int i = 1; i < 100000; i++) {
		if (i % t == 0)
			a += k;
 
		if (i % t == 0 && i > d)
			a += k;
		
		if (a >= n) {
			x = i;
			break;
		}
	}
 
	if (b > x)
		cout << "YES" << endl;
	else cout << "NO" << endl;
 
	return 0;
}
