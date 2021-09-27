#include <iostream>
#include <string>
using namespace std;
int main(){
	int x = 0;
	char d[100];
	string s;
	cin >> s;
	
	int l = (s.length() + 1) / 2;
	
	for (int i = 0; i < s.length(); i++) {
		if (i % 2 == 0) {
			d[x] = s[i];
			x += 1;
		}
	}
 
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			if (d[j] > d[i]) {
				swap(d[j], d[i]);
			}
		}
	}
	for (int i = 0; i < l; i++) {
		if(i == l - 1)
			cout << d[i];
		else cout << d[i] << '+';
	}
	return 0;
}
