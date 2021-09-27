#include "iostream"
#include "string"
using namespace std;
int main() {
	string x;
	int count = 0, n = 0;
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x[i] == x[i + 1])
			count++;
	}
 
	cout << count;
 
	return 0;
}
