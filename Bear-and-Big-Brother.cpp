#include <iostream>
#include <string>
using namespace std;
int main() {
	int x, y;
	int count = 0;
	cin >> x;
	cin >> y;
	for (int i = 0; i < 10; i++) {
		x = x * 3;
		y = y * 2;
		count++;
		if (x > y)
			break;
	}
	cout << count << endl;
	return 0;
}
