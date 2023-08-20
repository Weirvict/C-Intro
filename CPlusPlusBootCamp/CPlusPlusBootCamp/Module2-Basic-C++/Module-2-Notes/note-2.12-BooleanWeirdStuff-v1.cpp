// boolean C++ wierd stuff - dvb apr 17
#include <iostream>
using namespace std;
int main() {
	bool x = true;
	cout << "x is: " << x << endl;
	x = 42; // non zero value so true.
	cout << "x is: " << x << endl;
	x = 42==3; //assigns 0 to x.
	cout << "x is: " << x << endl;
	x = ((42==3) && true) || 0;
	cout << "x is: " << x << endl;	
	return 0;
}
