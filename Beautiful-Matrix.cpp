#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x[5][5], a = 0, b = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> x[i][j];
			if (x[i][j] == 1) {
				cout << abs(i - 2) + abs(j - 2) << endl;
				break;
			}		
		}
	}
	return 0;
}
