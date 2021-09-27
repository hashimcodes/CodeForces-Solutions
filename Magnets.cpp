#include <iostream>
#include <string>
using namespace std;
int main() {
	int n = 0, x = 0, y = 0;
	int count = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x != y)
			count++;
		y = x;
	}
 
	cout << count << endl;
 
	return 0;
 
}
