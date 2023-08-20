#include <iostream>
using namespace std;
int foo(int x);
int main() {
	cout << foo(42) << endl;
	return 0;
}
int foo(int x) {
	int y = 15;
	bool p = true;
	while (p) {
		y=y+3;
		x=x-5;
		p = ((x-y)> 4);
	}
	return x+y;	
}
