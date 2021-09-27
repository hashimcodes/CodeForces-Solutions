#include "iostream"
#include "string"
#include "cmath"
using namespace std;
int main() {
	string s, t;
	int place = 0;
	cin >> s;
	cin >> t;
	int i = 0;
	int len = t.length();
	for (int j = 0; j < len; j++) {
		if (t[j] == s[i]) {
			i++;
		}
		else continue;
	}
	cout << i + 1 << endl;
	return 0;
}
