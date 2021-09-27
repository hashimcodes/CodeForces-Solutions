#include "iostream"
#include "string"
using namespace std;
int main() {
	string s;
	int start = 0;
	int sum = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		int index = s[i] - 97;
		int move = abs(start - index);
		if (move < 13)
			sum += move;
		else sum += 26 - move;
		start = index;
	}
 
	cout << sum;
 
	return 0;
}
