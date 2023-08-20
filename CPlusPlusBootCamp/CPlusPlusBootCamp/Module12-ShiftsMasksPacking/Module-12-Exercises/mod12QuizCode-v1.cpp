#include <iostream>
using namespace std;
int main() {
	

	unsigned long long n = 3; // assume 64 bits
	char *p = (char*)(&n);
	p++;
	*p = 1;
	cout << "n: " << n << endl;
	
	unsigned int goo = 1;
	goo = goo << 2;
	cout << "goo: " << goo << endl;
	return 0;
}
