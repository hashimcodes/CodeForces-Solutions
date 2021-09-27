#include<string>
#include<iostream>
using namespace std;
int main(){
	string s, p;
	cin >> s;
	cin >> p;
	if (s._Equal(p))
		cout << -1;
	else if (s.length() > p.length())
		cout << s.length();
	else
		cout << p.length();
	return 0;
}
