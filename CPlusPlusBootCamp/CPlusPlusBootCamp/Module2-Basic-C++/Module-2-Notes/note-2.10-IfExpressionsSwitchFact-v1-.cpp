// IF expressions and recursion - dvb apr 17
#include <iostream>
using namespace std;
unsigned long long fact(unsigned int n);
int main() {
	
	int a = 1;
	int b = 2;
	cout <<"please enter a number" << endl;
	cin >> a;
	cin >> b;
	cout << a << " " << b << endl;
	//cout <<" factorial: " << fact(3) << endl;
	return 0;
}

	// returns the factorial of n
	unsigned long long fact(unsigned int n) {
		return (n<=0) ? 1: n*fact(n-1);
	}

