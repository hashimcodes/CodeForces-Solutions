#include <iostream>
#include <string>
using namespace std;
int main(){
	int n ;
	string word[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}
 
 
	for (int i = 0; i < n; i++) {
		if (word[i].length() > 10) {
			cout << word[i][0] << word[i].length() - 2 << word[i][word[i].length() - 1]<< endl;
		}
		else cout << word[i] <<endl;
	}
 
	return 0;
}
