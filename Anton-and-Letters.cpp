#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
	int count = 0;
	string in;
	getline(cin, in);
	set <char> se;
	for (int i = 0; i < in.length(); i++) {
		if (!(in[i] == '}' || in[i] == '{' || in[i] == ' ' || in[i] == ','))
			se.insert(in[i]);
	}
	cout << se.size()<< endl;
	return 0;
}
