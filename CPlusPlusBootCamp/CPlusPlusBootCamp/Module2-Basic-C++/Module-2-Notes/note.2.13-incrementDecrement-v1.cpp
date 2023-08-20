// c++ increment decrement - dvb apr 17
#include <iostream>
using namespace std;
int main() {
	int x = 1;
	cout << "x++ is:" << x++ << endl; // x used in expression, then incremented
	cout << "x is:" << x <<"\n\n";
	
	x = 1;
	cout << "++x is:" << ++x << endl; // x is incremented, then used in expression
	cout << "x is:" << x << endl;
	
	x = 10;
	while (x>1) x--;
	return 0;
}
