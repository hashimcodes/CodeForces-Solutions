#include <iostream>
#include <string>
using namespace std;
int main() {
	int n = 0, a = 0, count = 0;
	string x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		if (x[i] == 'A')
			count++;
	}
	a = n - count;
	if (count > a)
		cout << "Anton" << endl;
	else if (a > count)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
 
	return 0;
}
