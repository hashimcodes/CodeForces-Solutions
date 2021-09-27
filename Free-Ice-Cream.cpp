#include <iostream>
using namespace std;
int main(){
	long long n , x, m, count = 0;
	char sign;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> sign >> m;
		if (sign == '+')
			x += m;
		else if (sign == '-' && x - m >= 0)
			x -= m;
		else if (sign == '-' && x - m < 0)
			count++;
	}
	
	cout << x << " " << count << endl;
 
	return 0;
}
