#include "iostream"
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
 
	int sum;
	sum = 1;
 
	if (b != a)
		sum += 1;
	if (c != a && c != b)
		sum += 1;
	if (d != a && d != b && d != c)
		sum += 1;
 
	cout << (4 - sum) << endl;
	return 0;
}
