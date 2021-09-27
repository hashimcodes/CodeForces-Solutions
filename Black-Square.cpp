#include "iostream"
#include "string"
using namespace std;
int main() {
	string s;
	int x[5];
	int sum = 0;
	cin >> x[1] >> x[2] >> x[3] >> x[4];
	
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		sum += x[s[i] - '0'];
	}
 
	cout << sum;
 
	return 0;
}
