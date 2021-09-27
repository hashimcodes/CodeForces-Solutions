#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
 
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
 
int main() {
	int y, k, d,a,b,max;
	cin >> y >> k;
	
	if (y > k)
		max = y;
	if (k > y)
		max = k;
	
	a = 6 - (max - 1);
	b = 6;
 
	int common = gcd(a, b);
 
	a = a / common;
	b = b / common;
 
	cout << a << "/" << b;
 
 
	return 0;
}
