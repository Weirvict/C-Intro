//one line factorial function - dvb apr17
/ very "tight" code
#include <iostream>
using namespace std;
unsigned long long fact(unsigned int n);
int main(int argc, char** argv) {
	cout <<" factorial: " << fact(3) << endl;
	return 0;
}
// returns the factorial of n
	unsigned long long fact(unsigned int n) {
		return (n<=0) ? 0: n*fact(n-1);
}
